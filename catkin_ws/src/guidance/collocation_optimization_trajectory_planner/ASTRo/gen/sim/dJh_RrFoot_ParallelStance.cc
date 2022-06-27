/*
 * Automatically Generated from Mathematica.
 * Mon 13 Jun 2022 13:20:26 GMT+02:00
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
  double t783;
  double t6069;
  double t6402;
  double t6726;
  double t6733;
  double t8111;
  double t8662;
  double t10286;
  double t345;
  double t347;
  double t11172;
  double t11978;
  double t9866;
  double t11434;
  double t11712;
  double t344;
  double t12287;
  double t13403;
  double t13441;
  double t13571;
  double t13900;
  double t14171;
  double t14499;
  double t14670;
  double t14810;
  double t14870;
  double t14965;
  double t16458;
  double t16459;
  double t16470;
  double t16477;
  double t16481;
  double t16489;
  double t16935;
  double t16938;
  double t16942;
  double t16945;
  double t16946;
  double t16963;
  double t16973;
  double t16977;
  double t16992;
  double t17009;
  double t17066;
  double t17077;
  double t17112;
  double t17116;
  double t17118;
  double t17190;
  double t17193;
  double t17197;
  double t17198;
  double t17200;
  double t17209;
  double t17210;
  double t17211;
  double t17213;
  double t17218;
  double t17220;
  double t17221;
  double t17222;
  double t17228;
  double t17189;
  double t17201;
  double t17205;
  double t17206;
  double t17234;
  double t17235;
  double t17237;
  double t17239;
  double t17240;
  double t17241;
  double t17242;
  double t17243;
  double t17244;
  double t17248;
  double t17249;
  double t17250;
  double t17208;
  double t17245;
  double t17246;
  double t17259;
  double t17260;
  double t17261;
  double t17171;
  double t17172;
  double t17181;
  double t17254;
  double t17255;
  double t17256;
  double t17271;
  double t17273;
  double t17275;
  double t17292;
  double t17293;
  double t17294;
  double t17394;
  double t17395;
  double t17396;
  double t17257;
  double t17420;
  double t17422;
  double t17424;
  double t17281;
  double t17440;
  double t17441;
  double t17442;
  double t17258;
  double t17264;
  double t17266;
  double t17426;
  double t17432;
  double t17427;
  double t17428;
  double t17429;
  double t17439;
  double t17446;
  double t17282;
  double t17283;
  double t17284;
  double t17302;
  double t17315;
  double t17498;
  double t17501;
  double t17509;
  double t17511;
  double t17303;
  double t17304;
  double t17307;
  double t17316;
  double t17317;
  double t17318;
  double t17351;
  double t17378;
  double t17352;
  double t17361;
  double t17362;
  double t17458;
  double t17460;
  double t17583;
  double t17589;
  double t17593;
  double t17595;
  double t17382;
  double t17387;
  double t17388;
  double t17397;
  double t17398;
  double t17401;
  double t17403;
  double t17405;
  double t17406;
  double t17409;
  double t17411;
  double t17413;
  double t17414;
  double t17415;
  double t17416;
  double t17633;
  double t17635;
  double t17638;
  double t17629;
  double t17631;
  double t17431;
  double t17644;
  double t17645;
  double t17646;
  double t17648;
  double t17649;
  double t17650;
  double t17444;
  double t17450;
  double t17451;
  double t17453;
  double t17454;
  double t17457;
  double t17651;
  double t17462;
  double t17463;
  double t17655;
  double t17469;
  double t17470;
  double t17480;
  double t17484;
  double t17486;
  double t17487;
  double t17489;
  double t17490;
  double t17491;
  double t17492;
  double t17493;
  double t17494;
  double t17500;
  double t17504;
  double t17505;
  double t17506;
  double t17507;
  double t17510;
  double t17514;
  double t17515;
  double t17516;
  double t17518;
  double t17691;
  double t17523;
  double t17524;
  double t17695;
  double t17529;
  double t17530;
  double t17544;
  double t17545;
  double t17556;
  double t17561;
  double t17562;
  double t17564;
  double t17565;
  double t17566;
  double t17570;
  double t17574;
  double t17575;
  double t17576;
  double t17580;
  double t17581;
  double t17588;
  double t17594;
  double t17599;
  double t17600;
  double t17601;
  double t17602;
  double t17607;
  double t17724;
  double t17611;
  double t17612;
  double t17728;
  double t17617;
  double t17618;
  double t17623;
  double t17745;
  double t17747;
  double t17748;
  double t17758;
  double t17759;
  double t17760;
  double t17766;
  double t17767;
  double t17769;
  double t17771;
  double t17772;
  double t17773;
  double t17781;
  double t17782;
  double t17783;
  double t17784;
  double t17785;
  double t17786;
  double t17787;
  double t17790;
  double t17791;
  double t17792;
  double t17789;
  double t17798;
  double t17800;
  double t17803;
  double t17809;
  double t17810;
  double t17811;
  double t17813;
  double t17814;
  double t17815;
  double t17833;
  double t17836;
  double t17852;
  double t17854;
  double t17846;
  double t17877;
  double t17879;
  double t17757;
  double t17761;
  double t17762;
  double t17884;
  double t16192;
  double t16393;
  double t16432;
  double t17917;
  double t17924;
  double t17926;
  double t17749;
  double t17750;
  double t17751;
  double t17752;
  double t17753;
  double t17754;
  double t17755;
  double t17104;
  double t17105;
  double t17106;
  double t17959;
  double t17960;
  double t17961;
  double t17962;
  double t17963;
  double t17965;
  double t17966;
  double t17967;
  double t17971;
  double t17972;
  double t17973;
  double t17964;
  double t17976;
  double t17977;
  double t17978;
  double t17983;
  double t17984;
  double t17985;
  double t17980;
  double t17982;
  double t17991;
  double t17992;
  double t17993;
  double t17995;
  double t17996;
  double t17997;
  double t18001;
  double t18002;
  double t18003;
  double t17829;
  double t17830;
  double t17840;
  double t17841;
  double t17861;
  double t17862;
  double t17863;
  double t18020;
  double t17871;
  double t17872;
  double t17873;
  double t18024;
  double t18026;
  double t18050;
  double t18055;
  double t18057;
  double t18008;
  double t18009;
  double t18010;
  double t17907;
  double t17908;
  double t17909;
  double t18094;
  double t18100;
  t783 = Cos(var1[16]);
  t6069 = Cos(var1[17]);
  t6402 = -1.*t783*t6069;
  t6726 = Sin(var1[16]);
  t6733 = Sin(var1[17]);
  t8111 = -1.*t6726*t6733;
  t8662 = t6402 + t8111;
  t10286 = Cos(var1[15]);
  t345 = Cos(var1[5]);
  t347 = Sin(var1[15]);
  t11172 = Sin(var1[5]);
  t11978 = Cos(var1[3]);
  t9866 = t345*t347*t8662;
  t11434 = t10286*t8662*t11172;
  t11712 = t9866 + t11434;
  t344 = Sin(var1[3]);
  t12287 = Cos(var1[4]);
  t13403 = -1.*t6069*t6726;
  t13441 = t783*t6733;
  t13571 = t13403 + t13441;
  t13900 = t12287*t13571;
  t14171 = Sin(var1[4]);
  t14499 = t10286*t345*t8662;
  t14670 = -1.*t347*t8662*t11172;
  t14810 = t14499 + t14670;
  t14870 = -1.*t14171*t14810;
  t14965 = t13900 + t14870;
  t16458 = t345*t347;
  t16459 = t10286*t11172;
  t16470 = t16458 + t16459;
  t16477 = -1.*t10286*t345;
  t16481 = t347*t11172;
  t16489 = t16477 + t16481;
  t16935 = t345*t347*t13571;
  t16938 = t10286*t13571*t11172;
  t16942 = t16935 + t16938;
  t16945 = t783*t6069;
  t16946 = t6726*t6733;
  t16963 = t16945 + t16946;
  t16973 = t12287*t16963;
  t16977 = t10286*t345*t13571;
  t16992 = -1.*t347*t13571*t11172;
  t17009 = t16977 + t16992;
  t17066 = -1.*t14171*t17009;
  t17077 = t16973 + t17066;
  t17112 = -1.*t13571*t14171;
  t17116 = -1.*t12287*t14810;
  t17118 = t17112 + t17116;
  t17190 = -1.*t6069;
  t17193 = 1. + t17190;
  t17197 = -0.50321*t17193;
  t17198 = -0.19821*t6069;
  t17200 = t17197 + t17198;
  t17209 = -1.*t10286;
  t17210 = 1. + t17209;
  t17211 = -0.15121*t17210;
  t17213 = -1.*t783;
  t17218 = 1. + t17213;
  t17220 = -0.28121*t17218;
  t17221 = t783*t17200;
  t17222 = 0.305*t6726*t6733;
  t17228 = t17220 + t17221 + t17222;
  t17189 = 0.28121*t6726;
  t17201 = t17200*t6726;
  t17205 = -0.305*t783*t6733;
  t17206 = t17189 + t17201 + t17205;
  t17234 = t10286*t17228;
  t17235 = t17211 + t17234;
  t17237 = t345*t17235;
  t17239 = -0.15121*t10286;
  t17240 = 0.15121*t347;
  t17241 = t347*t17228;
  t17242 = t17211 + t17239 + t17240 + t17241;
  t17243 = -1.*t17242*t11172;
  t17244 = t17237 + t17243;
  t17248 = t17206*t14171;
  t17249 = t12287*t17244;
  t17250 = t17248 + t17249;
  t17208 = -1.*t17206*t14171;
  t17245 = -1.*t12287*t17244;
  t17246 = t17208 + t17245;
  t17259 = t12287*t17206;
  t17260 = -1.*t14171*t17244;
  t17261 = t17259 + t17260;
  t17171 = t16963*t14171;
  t17172 = t12287*t17009;
  t17181 = t17171 + t17172;
  t17254 = t345*t17242;
  t17255 = t17235*t11172;
  t17256 = t17254 + t17255;
  t17271 = -1.*t16963*t14171;
  t17273 = -1.*t12287*t17009;
  t17275 = t17271 + t17273;
  t17292 = t13571*t14171;
  t17293 = t12287*t14810;
  t17294 = t17292 + t17293;
  t17394 = -1.*t345*t347*t8662;
  t17395 = -1.*t10286*t8662*t11172;
  t17396 = t17394 + t17395;
  t17257 = -1.*t16489*t17256;
  t17420 = -1.*t345*t17242;
  t17422 = -1.*t17235*t11172;
  t17424 = t17420 + t17422;
  t17281 = t16942*t17256;
  t17440 = -1.*t345*t347*t13571;
  t17441 = -1.*t10286*t13571*t11172;
  t17442 = t17440 + t17441;
  t17258 = -1.*t12287*t16470*t17250;
  t17264 = t14171*t16470*t17261;
  t17266 = t17257 + t17258 + t17264;
  t17426 = -1.*t16470*t17256;
  t17432 = -1.*t16489*t17244;
  t17427 = t10286*t345;
  t17428 = -1.*t347*t11172;
  t17429 = t17427 + t17428;
  t17439 = t17009*t17256;
  t17446 = t16942*t17244;
  t17282 = t17181*t17250;
  t17283 = t17077*t17261;
  t17284 = t17281 + t17282 + t17283;
  t17302 = -1.*t16942*t17256;
  t17315 = t11712*t17256;
  t17498 = -1.*t17009*t17256;
  t17501 = -1.*t16942*t17244;
  t17509 = t14810*t17256;
  t17511 = t11712*t17244;
  t17303 = -1.*t17181*t17250;
  t17304 = -1.*t17077*t17261;
  t17307 = t17302 + t17303 + t17304;
  t17316 = t17294*t17250;
  t17317 = t14965*t17261;
  t17318 = t17315 + t17316 + t17317;
  t17351 = t16489*t17256;
  t17378 = -1.*t11712*t17256;
  t17352 = t12287*t16470*t17250;
  t17361 = -1.*t14171*t16470*t17261;
  t17362 = t17351 + t17352 + t17361;
  t17458 = Power(t12287,2);
  t17460 = Power(t14171,2);
  t17583 = t16470*t17256;
  t17589 = t16489*t17244;
  t17593 = -1.*t14810*t17256;
  t17595 = -1.*t11712*t17244;
  t17382 = -1.*t17294*t17250;
  t17387 = -1.*t14965*t17261;
  t17388 = t17378 + t17382 + t17387;
  t17397 = var2[0]*t12287*t17396;
  t17398 = t344*t14171*t17396;
  t17401 = t11978*t14810;
  t17403 = t17398 + t17401;
  t17405 = var2[1]*t17403;
  t17406 = -1.*t11978*t14171*t17396;
  t17409 = t344*t14810;
  t17411 = t17406 + t17409;
  t17413 = var2[2]*t17411;
  t17414 = -1.*t16470*t17244;
  t17415 = t17257 + t17414;
  t17416 = t17009*t17415;
  t17633 = -0.15121*t347;
  t17635 = -1.*t347*t17228;
  t17638 = t17633 + t17635;
  t17629 = 0.15121*t10286;
  t17631 = t17629 + t17234;
  t17431 = -1.*t17429*t17244;
  t17644 = t345*t17638;
  t17645 = -1.*t17631*t11172;
  t17646 = t17644 + t17645;
  t17648 = t345*t17631;
  t17649 = t17638*t11172;
  t17650 = t17648 + t17649;
  t17444 = t17442*t17244;
  t17450 = t17206*t16963;
  t17451 = t17009*t17244;
  t17453 = t17450 + t17281 + t17451;
  t17454 = t16470*t17453;
  t17457 = t12287*t17442*t17266;
  t17651 = -1.*t16489*t17650;
  t17462 = -1.*t12287*t17429*t17250;
  t17463 = t14171*t17429*t17261;
  t17655 = t16942*t17650;
  t17469 = t12287*t17442*t17250;
  t17470 = -1.*t14171*t17442*t17261;
  t17480 = t12287*t17429*t17284;
  t17484 = var2[0]*t12287*t17429;
  t17486 = t344*t16470;
  t17487 = -1.*t11978*t14171*t17429;
  t17489 = t17486 + t17487;
  t17490 = var2[2]*t17489;
  t17491 = t11978*t16470;
  t17492 = t344*t14171*t17429;
  t17493 = t17491 + t17492;
  t17494 = var2[1]*t17493;
  t17500 = -1.*t17442*t17244;
  t17504 = -1.*t17206*t16963;
  t17505 = -1.*t17009*t17244;
  t17506 = t17504 + t17302 + t17505;
  t17507 = t14810*t17506;
  t17510 = t17396*t17244;
  t17514 = t17206*t13571;
  t17515 = t14810*t17244;
  t17516 = t17514 + t17315 + t17515;
  t17518 = t17009*t17516;
  t17691 = -1.*t16942*t17650;
  t17523 = -1.*t12287*t17442*t17250;
  t17524 = t14171*t17442*t17261;
  t17695 = t11712*t17650;
  t17529 = t12287*t17396*t17250;
  t17530 = -1.*t14171*t17396*t17261;
  t17544 = t12287*t17396*t17307;
  t17545 = t12287*t17442*t17318;
  t17556 = var2[0]*t12287*t17442;
  t17561 = t344*t14171*t17442;
  t17562 = t11978*t17009;
  t17564 = t17561 + t17562;
  t17565 = var2[1]*t17564;
  t17566 = -1.*t11978*t14171*t17442;
  t17570 = t344*t17009;
  t17574 = t17566 + t17570;
  t17575 = var2[2]*t17574;
  t17576 = t16470*t17244;
  t17580 = t17351 + t17576;
  t17581 = t14810*t17580;
  t17588 = t17429*t17244;
  t17594 = -1.*t17396*t17244;
  t17599 = -1.*t17206*t13571;
  t17600 = -1.*t14810*t17244;
  t17601 = t17599 + t17378 + t17600;
  t17602 = t16470*t17601;
  t17607 = t12287*t17396*t17362;
  t17724 = t16489*t17650;
  t17611 = t12287*t17429*t17250;
  t17612 = -1.*t14171*t17429*t17261;
  t17728 = -1.*t11712*t17650;
  t17617 = -1.*t12287*t17396*t17250;
  t17618 = t14171*t17396*t17261;
  t17623 = t12287*t17429*t17388;
  t17745 = t6069*t6726;
  t17747 = -1.*t783*t6733;
  t17748 = t17745 + t17747;
  t17758 = t10286*t345*t17748;
  t17759 = -1.*t347*t17748*t11172;
  t17760 = t17758 + t17759;
  t17766 = t345*t347*t17748;
  t17767 = t10286*t17748*t11172;
  t17769 = t17766 + t17767;
  t17771 = t12287*t8662;
  t17772 = -1.*t14171*t17760;
  t17773 = t17771 + t17772;
  t17781 = -0.28121*t6726;
  t17782 = -1.*t17200*t6726;
  t17783 = 0.305*t783*t6733;
  t17784 = t17781 + t17782 + t17783;
  t17785 = t345*t347*t17784;
  t17786 = t10286*t17784*t11172;
  t17787 = t17785 + t17786;
  t17790 = t10286*t345*t17784;
  t17791 = -1.*t347*t17784*t11172;
  t17792 = t17790 + t17791;
  t17789 = -1.*t16489*t17787;
  t17798 = 0.28121*t783;
  t17800 = t17798 + t17221 + t17222;
  t17803 = t17787*t16942;
  t17809 = t17800*t14171;
  t17810 = t12287*t17792;
  t17811 = t17809 + t17810;
  t17813 = t12287*t17800;
  t17814 = -1.*t14171*t17792;
  t17815 = t17813 + t17814;
  t17833 = t17206*t8662;
  t17836 = t13571*t17800;
  t17852 = Power(t10286,2);
  t17854 = Power(t347,2);
  t17846 = -1.*t17800*t16963;
  t17877 = t17787*t11712;
  t17879 = t17769*t17256;
  t17757 = t8662*t14171;
  t17761 = t12287*t17760;
  t17762 = t17757 + t17761;
  t17884 = -1.*t17787*t16942;
  t16192 = t11978*t11712;
  t16393 = -1.*t344*t14965;
  t16432 = t16192 + t16393;
  t17917 = t16489*t17787;
  t17924 = -1.*t17787*t11712;
  t17926 = -1.*t17769*t17256;
  t17749 = -0.15121*t17748;
  t17750 = -0.15121*t13571;
  t17751 = t17749 + t17750;
  t17752 = var2[15]*t17751;
  t17753 = -1.*t347*t17235;
  t17754 = t10286*t17242;
  t17755 = t17753 + t17754;
  t17104 = t11978*t16942;
  t17105 = -1.*t344*t17077;
  t17106 = t17104 + t17105;
  t17959 = 0.305*t6069*t6726;
  t17960 = t17959 + t17205;
  t17961 = t345*t347*t17960;
  t17962 = t10286*t17960*t11172;
  t17963 = t17961 + t17962;
  t17965 = t10286*t345*t17960;
  t17966 = -1.*t347*t17960*t11172;
  t17967 = t17965 + t17966;
  t17971 = t345*t347*t16963;
  t17972 = t10286*t16963*t11172;
  t17973 = t17971 + t17972;
  t17964 = -1.*t16489*t17963;
  t17976 = -0.305*t783*t6069;
  t17977 = -0.305*t6726*t6733;
  t17978 = t17976 + t17977;
  t17983 = t10286*t345*t16963;
  t17984 = -1.*t347*t16963*t11172;
  t17985 = t17983 + t17984;
  t17980 = t17963*t16942;
  t17982 = t17973*t17256;
  t17991 = t17978*t14171;
  t17992 = t12287*t17967;
  t17993 = t17991 + t17992;
  t17995 = t12287*t17978;
  t17996 = -1.*t14171*t17967;
  t17997 = t17995 + t17996;
  t18001 = t17748*t14171;
  t18002 = t12287*t17985;
  t18003 = t18001 + t18002;
  t17829 = t8662*t17228;
  t17830 = t17514 + t17829;
  t17840 = -1.*t13571*t17228;
  t17841 = t17840 + t17504;
  t17861 = -1.*t10286*t13571*t17235;
  t17862 = -1.*t347*t13571*t17242;
  t17863 = t17504 + t17861 + t17862;
  t18020 = t13571*t17978;
  t17871 = t10286*t8662*t17235;
  t17872 = t347*t8662*t17242;
  t17873 = t17514 + t17871 + t17872;
  t18024 = -1.*t17748*t17206;
  t18026 = -1.*t17978*t16963;
  t18050 = t17963*t11712;
  t18055 = -1.*t17963*t16942;
  t18057 = -1.*t17973*t17256;
  t18008 = t12287*t17748;
  t18009 = -1.*t14171*t17985;
  t18010 = t18008 + t18009;
  t17907 = t347*t17235;
  t17908 = -1.*t10286*t17242;
  t17909 = t17907 + t17908;
  t18094 = t16489*t17963;
  t18100 = -1.*t17963*t11712;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t11978*t14965 - 1.*t11712*t344)*var2[1] + t16432*var2[2];
  p_output1[10]=(t11978*t14171*t16470 - 1.*t16489*t344)*var2[1] + (t11978*t16489 + t14171*t16470*t344)*var2[2];
  p_output1[11]=(-1.*t11978*t17077 - 1.*t16942*t344)*var2[1] + t17106*var2[2];
  p_output1[12]=t14965*var2[0] - 1.*t17118*t344*var2[1] + t11978*t17118*var2[2] + (t17181*(t14171*t16470*t17246 + t14171*t16470*t17250) + t17077*t17266 + t12287*t16470*(t17077*t17246 + t17077*t17250 + t17181*t17261 + t17261*t17275) - 1.*t14171*t16470*t17284)*var2[3];
  p_output1[13]=-1.*t14171*t16470*var2[0] + t12287*t16470*t344*var2[1] - 1.*t11978*t12287*t16470*var2[2] + ((-1.*t17077*t17246 - 1.*t17077*t17250 - 1.*t17181*t17261 - 1.*t17261*t17275)*t17294 + t17181*(t14965*t17246 + t14965*t17250 + t17118*t17261 + t17261*t17294) + t14965*t17307 + t17077*t17318)*var2[3];
  p_output1[14]=t17077*var2[0] - 1.*t17275*t344*var2[1] + t11978*t17275*var2[2] + ((-1.*t14171*t16470*t17246 - 1.*t14171*t16470*t17250)*t17294 + t12287*t16470*(-1.*t14965*t17246 - 1.*t14965*t17250 - 1.*t17118*t17261 - 1.*t17261*t17294) + t14965*t17362 - 1.*t14171*t16470*t17388)*var2[3];
  p_output1[15]=t17397 + t17405 + t17413 + (t17457 + t17181*(t17426 + t17432 - 1.*t16470*t17424*t17458 - 1.*t16470*t17424*t17460 + t17462 + t17463) + t12287*t16470*(-1.*t14171*t17077*t17424 + t12287*t17181*t17424 + t17439 + t17446 + t17469 + t17470) + t17480)*var2[3] + (t17416 + t16942*(-1.*t16470*t17424 + t17426 + t17431 + t17432) + t16489*(t17009*t17424 + t17439 + t17444 + t17446) + t17454)*var2[4];
  p_output1[16]=t17484 + t17490 + t17494 + (t17294*(t14171*t17077*t17424 - 1.*t12287*t17181*t17424 + t17498 + t17501 + t17523 + t17524) + t17181*(-1.*t14171*t14965*t17424 + t12287*t17294*t17424 + t17509 + t17511 + t17529 + t17530) + t17544 + t17545)*var2[3] + (t11712*(-1.*t17009*t17424 + t17498 + t17500 + t17501) + t17507 + t16942*(t14810*t17424 + t17509 + t17510 + t17511) + t17518)*var2[4];
  p_output1[17]=t17556 + t17565 + t17575 + (t17607 + t17294*(t16470*t17424*t17458 + t16470*t17424*t17460 + t17583 + t17589 + t17611 + t17612) + t12287*t16470*(t14171*t14965*t17424 - 1.*t12287*t17294*t17424 + t17593 + t17595 + t17617 + t17618) + t17623)*var2[3] + (t17581 + t11712*(t16470*t17424 + t17583 + t17588 + t17589) + t16489*(-1.*t14810*t17424 + t17593 + t17594 + t17595) + t17602)*var2[4];
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
  p_output1[45]=t17397 + t17405 + t17413 + (t17457 + t17480 + t17181*(t17426 + t17462 + t17463 - 1.*t16470*t17458*t17646 - 1.*t16470*t17460*t17646 + t17651) + t12287*t16470*(t17439 + t17469 + t17470 - 1.*t14171*t17077*t17646 + t12287*t17181*t17646 + t17655))*var2[3] + (t17416 + t17454 + t16942*(t17426 + t17431 - 1.*t16470*t17646 + t17651) + t16489*(t17439 + t17444 + t17009*t17646 + t17655))*var2[4] + t16963*(-1.*t10286*t17235 + t10286*t17631 - 1.*t17242*t347 - 1.*t17638*t347)*var2[5];
  p_output1[46]=t17484 + t17490 + t17494 + (t17544 + t17545 + t17294*(t17498 + t17523 + t17524 + t14171*t17077*t17646 - 1.*t12287*t17181*t17646 + t17691) + t17181*(t17509 + t17529 + t17530 - 1.*t14171*t14965*t17646 + t12287*t17294*t17646 + t17695))*var2[3] + (t17507 + t17518 + t11712*(t17498 + t17500 - 1.*t17009*t17646 + t17691) + t16942*(t17509 + t17510 + t14810*t17646 + t17695))*var2[4] + (t13571*(-1.*t10286*t13571*t17242 - 1.*t10286*t13571*t17638 + t13571*t17235*t347 - 1.*t13571*t17631*t347) + t16963*(t10286*t17242*t8662 + t10286*t17638*t8662 - 1.*t17235*t347*t8662 + t17631*t347*t8662))*var2[5];
  p_output1[47]=t17556 + t17565 + t17575 + (t17607 + t17623 + t17294*(t17583 + t17611 + t17612 + t16470*t17458*t17646 + t16470*t17460*t17646 + t17724) + t12287*t16470*(t17593 + t17617 + t17618 + t14171*t14965*t17646 - 1.*t12287*t17294*t17646 + t17728))*var2[3] + (t17581 + t17602 + t11712*(t17583 + t17588 + t16470*t17646 + t17724) + t16489*(t17593 + t17594 - 1.*t14810*t17646 + t17728))*var2[4] + t13571*(t10286*t17235 - 1.*t10286*t17631 + t17242*t347 + t17638*t347)*var2[5];
  p_output1[48]=t17752 + t17762*var2[0] + (t11978*t17769 - 1.*t17773*t344)*var2[1] + (t11978*t17773 + t17769*t344)*var2[2] + (t17266*t17294 + t17181*(t17789 - 1.*t12287*t16470*t17811 + t14171*t16470*t17815) + t12287*t16470*(t17315 + t17316 + t17317 + t17803 + t17181*t17811 + t17077*t17815))*var2[3] + (t11712*t17415 + t16942*(t17789 - 1.*t16470*t17792) + t16489*(t17315 + t17514 + t17515 + t17009*t17792 + t16963*t17800 + t17803))*var2[4] + t13571*t17755*var2[5];
  p_output1[49]=(t17294*t17318 + t17307*t17762 + t17181*(t17250*t17762 + t17261*t17773 + t17294*t17811 + t14965*t17815 + t17877 + t17879) + t17294*(t17378 + t17382 + t17387 - 1.*t17181*t17811 - 1.*t17077*t17815 + t17884))*var2[3] + (t11712*t17516 + t17506*t17769 + t16942*(t17244*t17760 + t14810*t17792 + t17833 + t17836 + t17877 + t17879) + t11712*(t17378 + t17599 + t17600 - 1.*t17009*t17792 + t17846 + t17884))*var2[4] + (t13571*t17873 + t17863*t8662 + t16963*(t10286*t17235*t17748 + t17833 + t17836 + t17242*t17748*t347 + t17784*t17852*t8662 + t17784*t17854*t8662) + t13571*(t17599 + t17846 - 1.*t13571*t17784*t17852 - 1.*t13571*t17784*t17854 - 1.*t10286*t17235*t8662 - 1.*t17242*t347*t8662))*var2[5] + (t13571*t17830 + t17841*t8662 + t13571*(t17599 - 1.*t13571*t17784 + t17846 - 1.*t17228*t8662) + t16963*(t17228*t17748 + t17833 + t17836 + t17784*t8662))*var2[15];
  p_output1[50]=t17294*var2[0] + t16432*var2[1] + (t11978*t14965 + t11712*t344)*var2[2] + (t17362*t17762 + t17294*(t12287*t16470*t17811 - 1.*t14171*t16470*t17815 + t17917) + t12287*t16470*(-1.*t17250*t17762 - 1.*t17261*t17773 - 1.*t17294*t17811 - 1.*t14965*t17815 + t17924 + t17926))*var2[3] + (t17580*t17769 + t11712*(t16470*t17792 + t17917) + t16489*(-1.*t17244*t17760 - 1.*t14810*t17792 - 1.*t13571*t17800 + t17924 + t17926 - 1.*t17206*t8662))*var2[4] + t17909*t8662*var2[5];
  p_output1[51]=t17752 + t17181*var2[0] + t17106*var2[1] + (t11978*t17077 + t16942*t344)*var2[2] + (t17181*(t17964 - 1.*t12287*t16470*t17993 + t14171*t16470*t17997) + t17266*t18003 + t12287*t16470*(t17980 + t17982 + t17181*t17993 + t17077*t17997 + t17250*t18003 + t17261*t18010))*var2[3] + (t16942*(t17964 - 1.*t16470*t17967) + t17415*t17973 + t16489*(t17206*t17748 + t17009*t17967 + t16963*t17978 + t17980 + t17982 + t17244*t17985))*var2[4] + t17748*t17755*var2[5] + (0.28121*t6069 + t17200*t6069 - 0.305*Power(t6069,2))*var2[16];
  p_output1[52]=(t17181*t17307 + t17318*t18003 + t17181*(t17281 + t17282 + t17283 + t17294*t17993 + t14965*t17997 + t18050) + t17294*(-1.*t17181*t17993 - 1.*t17077*t17997 - 1.*t17250*t18003 - 1.*t17261*t18010 + t18055 + t18057))*var2[3] + (t16942*t17506 + t17516*t17973 + t16942*(t17281 + t17450 + t17451 + t14810*t17967 + t18020 + t18050) + t11712*(-1.*t17009*t17967 - 1.*t17244*t17985 + t18024 + t18026 + t18055 + t18057))*var2[4] + (t16963*t17863 + t17748*t17873 + t13571*(-1.*t10286*t16963*t17235 - 1.*t13571*t17852*t17960 - 1.*t13571*t17854*t17960 + t18024 + t18026 - 1.*t16963*t17242*t347) + t16963*(t10286*t13571*t17235 + t17450 + t18020 + t13571*t17242*t347 + t17852*t17960*t8662 + t17854*t17960*t8662))*var2[5] + (t17748*t17830 + t16963*t17841 + t13571*(-1.*t16963*t17228 - 1.*t13571*t17960 + t18024 + t18026) + t16963*(t13571*t17228 + t17450 + t18020 + t17960*t8662))*var2[15];
  p_output1[53]=t18003*var2[0] + (t11978*t17973 - 1.*t18010*t344)*var2[1] + (t11978*t18010 + t17973*t344)*var2[2] + (t17181*t17362 + t17294*(t12287*t16470*t17993 - 1.*t14171*t16470*t17997 + t18094) + t12287*t16470*(t17302 + t17303 + t17304 - 1.*t17294*t17993 - 1.*t14965*t17997 + t18100))*var2[3] + (t16942*t17580 + t11712*(t16470*t17967 + t18094) + t16489*(t17302 + t17504 + t17505 - 1.*t14810*t17967 - 1.*t13571*t17978 + t18100))*var2[4] + t16963*t17909*var2[5] + (-0.28121*t6733 - 1.*t17200*t6733 + 0.305*t6069*t6733)*var2[16];
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

#include "dJh_RrFoot_ParallelStance.hh"

namespace SymFunction
{

void dJh_RrFoot_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
