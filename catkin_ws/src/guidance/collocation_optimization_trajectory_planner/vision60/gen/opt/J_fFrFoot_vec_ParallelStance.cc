/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:33:14 GMT+02:00
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
  double t7316;
  double t6857;
  double t7336;
  double t7504;
  double t7414;
  double t7421;
  double t7525;
  double t7016;
  double t7433;
  double t7526;
  double t7539;
  double t7357;
  double t7572;
  double t7575;
  double t7578;
  double t7561;
  double t7616;
  double t7655;
  double t8098;
  double t8120;
  double t8121;
  double t8122;
  double t7589;
  double t7592;
  double t7595;
  double t8356;
  double t8357;
  double t8373;
  double t8500;
  double t8579;
  double t8597;
  double t8434;
  double t8458;
  double t8467;
  double t7315;
  double t7358;
  double t7370;
  double t8681;
  double t8688;
  double t7553;
  double t7599;
  double t7601;
  double t7612;
  double t8137;
  double t8150;
  double t8189;
  double t8195;
  double t8196;
  double t8162;
  double t8179;
  double t8183;
  double t8390;
  double t8392;
  double t8395;
  double t8810;
  double t8816;
  double t8857;
  double t8697;
  double t8700;
  double t8703;
  double t8631;
  double t8637;
  double t8638;
  double t9526;
  double t9537;
  double t9562;
  double t9506;
  double t9507;
  double t9508;
  double t9653;
  double t9654;
  double t9656;
  double t8951;
  double t8952;
  double t8990;
  double t9002;
  double t9033;
  double t9069;
  double t9080;
  double t9084;
  double t9094;
  double t9167;
  double t9168;
  double t9172;
  double t9182;
  double t9205;
  double t9229;
  double t9369;
  double t9394;
  double t9403;
  double t9435;
  double t9446;
  double t9455;
  double t9462;
  double t9477;
  double t9478;
  double t9577;
  double t9578;
  double t9593;
  double t9609;
  double t9618;
  double t9624;
  double t9930;
  double t9931;
  double t9932;
  double t9895;
  double t9911;
  double t9924;
  double t9990;
  double t9992;
  double t9994;
  double t10002;
  double t10004;
  double t10005;
  double t10012;
  double t10014;
  double t10021;
  double t9988;
  double t10000;
  double t10022;
  double t10025;
  double t9982;
  double t10028;
  double t10033;
  double t10039;
  double t10040;
  double t10041;
  double t10045;
  double t10049;
  double t10053;
  double t10054;
  double t10055;
  double t10056;
  double t10057;
  double t10059;
  double t10070;
  double t10074;
  double t10075;
  double t10076;
  double t8670;
  double t8672;
  double t8679;
  double t10102;
  double t10110;
  double t10114;
  double t10081;
  double t10086;
  double t10093;
  double t10038;
  double t10077;
  double t10078;
  double t10130;
  double t10131;
  double t10134;
  double t10463;
  double t10464;
  double t10466;
  double t10147;
  double t10148;
  double t10150;
  double t10153;
  double t10216;
  double t10230;
  double t10231;
  double t10232;
  double t10278;
  double t10283;
  double t10304;
  double t10306;
  double t10320;
  double t10321;
  double t10324;
  double t10326;
  double t10355;
  double t10368;
  double t10370;
  double t10371;
  double t10441;
  double t10442;
  double t10444;
  double t10449;
  double t8233;
  double t8243;
  double t8298;
  double t10920;
  double t10932;
  double t10934;
  double t10947;
  double t10965;
  double t8206;
  double t8215;
  double t8226;
  double t10966;
  double t10967;
  double t10968;
  double t10971;
  double t10972;
  double t10974;
  double t8311;
  double t8313;
  double t8316;
  double t10918;
  double t11061;
  double t11063;
  double t11066;
  double t11067;
  double t11068;
  double t11070;
  double t11077;
  double t11078;
  double t11082;
  double t11065;
  double t11071;
  double t11073;
  double t11075;
  double t11088;
  double t11090;
  double t11095;
  double t11097;
  double t11099;
  double t8353;
  double t8408;
  double t8412;
  double t8618;
  double t8647;
  double t8654;
  double t11212;
  double t11213;
  double t11216;
  double t11176;
  double t11237;
  double t11241;
  double t11253;
  double t11255;
  double t11266;
  double t11273;
  double t11275;
  double t11245;
  double t11261;
  double t11262;
  double t11264;
  double t11276;
  double t11279;
  double t11283;
  double t11289;
  double t11301;
  double t10469;
  double t10495;
  double t10527;
  double t10658;
  double t10660;
  double t10694;
  double t10695;
  double t10773;
  double t10801;
  double t10830;
  double t11456;
  double t11457;
  double t11459;
  double t10945;
  double t10970;
  double t10983;
  double t10984;
  double t11469;
  double t11470;
  double t11471;
  double t10996;
  double t10998;
  double t11479;
  double t11480;
  double t11481;
  double t11007;
  double t11008;
  double t11484;
  double t11485;
  double t11486;
  double t11496;
  double t11497;
  double t11498;
  double t11026;
  double t11519;
  double t11031;
  double t11038;
  double t11039;
  double t11503;
  double t11505;
  double t11506;
  double t11074;
  double t11104;
  double t11594;
  double t11117;
  double t11127;
  double t11128;
  double t11143;
  double t11155;
  double t11158;
  double t11263;
  double t11313;
  double t11314;
  double t11366;
  double t11367;
  double t11392;
  double t11413;
  double t11435;
  double t11556;
  double t11558;
  double t11564;
  double t11567;
  double t11517;
  double t11518;
  double t11524;
  double t11526;
  double t11535;
  double t11536;
  double t11542;
  double t11543;
  double t11744;
  double t11745;
  double t11628;
  double t11630;
  double t11771;
  double t11774;
  double t11595;
  double t11880;
  double t11841;
  double t11842;
  double t11843;
  double t11853;
  double t11860;
  double t11861;
  double t11612;
  double t11614;
  double t11606;
  double t11751;
  double t11752;
  double t11716;
  double t11654;
  double t11657;
  double t11804;
  double t11809;
  double t11700;
  double t11682;
  double t11684;
  double t11753;
  double t11812;
  double t11942;
  double t11943;
  double t11948;
  double t12060;
  double t12065;
  double t12081;
  double t12082;
  double t11987;
  double t11993;
  double t12001;
  double t12195;
  double t12197;
  t7316 = Cos(var1[12]);
  t6857 = Cos(var1[4]);
  t7336 = Sin(var1[4]);
  t7504 = Cos(var1[13]);
  t7414 = Cos(var1[14]);
  t7421 = Sin(var1[13]);
  t7525 = Sin(var1[14]);
  t7016 = Sin(var1[12]);
  t7433 = t7414*t7421;
  t7526 = -1.*t7504*t7525;
  t7539 = t7433 + t7526;
  t7357 = Sin(var1[5]);
  t7572 = t7504*t7414;
  t7575 = t7421*t7525;
  t7578 = t7572 + t7575;
  t7561 = Cos(var1[5]);
  t7616 = -1.*t7414*t7421;
  t7655 = t7504*t7525;
  t8098 = t7616 + t7655;
  t8120 = t7561*t8098;
  t8121 = t7016*t7578*t7357;
  t8122 = t8120 + t8121;
  t7589 = t7561*t7578;
  t7592 = t7016*t7539*t7357;
  t7595 = t7589 + t7592;
  t8356 = -1.*t7504*t7414;
  t8357 = -1.*t7421*t7525;
  t8373 = t8356 + t8357;
  t8500 = t7316*t7539*t7336;
  t8579 = t6857*t7595;
  t8597 = t8500 + t8579;
  t8434 = t7316*t7578*t7336;
  t8458 = t6857*t8122;
  t8467 = t8434 + t8458;
  t7315 = t6857*t7016;
  t7358 = t7316*t7336*t7357;
  t7370 = t7315 + t7358;
  t8681 = Sin(var1[3]);
  t8688 = Cos(var1[3]);
  t7553 = t7316*t6857*t7539;
  t7599 = -1.*t7336*t7595;
  t7601 = t7553 + t7599;
  t7612 = t7316*t6857*t7578;
  t8137 = -1.*t7336*t8122;
  t8150 = t7612 + t8137;
  t8189 = t7561*t7016*t7539;
  t8195 = -1.*t7578*t7357;
  t8196 = t8189 + t8195;
  t8162 = t7561*t7016*t7578;
  t8179 = -1.*t8098*t7357;
  t8183 = t8162 + t8179;
  t8390 = t7561*t8373;
  t8392 = t7016*t8098*t7357;
  t8395 = t8390 + t8392;
  t8810 = -1.*t7561*t7016*t7578;
  t8816 = t8098*t7357;
  t8857 = t8810 + t8816;
  t8697 = -1.*t7561*t7016*t7539;
  t8700 = t7578*t7357;
  t8703 = t8697 + t8700;
  t8631 = t7561*t7539;
  t8637 = t7016*t8373*t7357;
  t8638 = t8631 + t8637;
  t9526 = t8688*t8703;
  t9537 = -1.*t8681*t7601;
  t9562 = t9526 + t9537;
  t9506 = t8688*t8857;
  t9507 = -1.*t8681*t8150;
  t9508 = t9506 + t9507;
  t9653 = t7316*t8688*t7561;
  t9654 = -1.*t8681*t7370;
  t9656 = t9653 + t9654;
  t8951 = -1.*t7016*t7336;
  t8952 = t7316*t6857*t7357;
  t8990 = t8951 + t8952;
  t9002 = -1.*t7316*t7539*t7336;
  t9033 = -1.*t6857*t7595;
  t9069 = t9002 + t9033;
  t9080 = -1.*t7316*t7578*t7336;
  t9084 = -1.*t6857*t8122;
  t9094 = t9080 + t9084;
  t9167 = t7316*t6857;
  t9168 = -1.*t7016*t7336*t7357;
  t9172 = t9167 + t9168;
  t9182 = -1.*t6857*t7016*t7539;
  t9205 = -1.*t7316*t7539*t7336*t7357;
  t9229 = t9182 + t9205;
  t9369 = -1.*t6857*t7016*t7578;
  t9394 = -1.*t7316*t7578*t7336*t7357;
  t9403 = t9369 + t9394;
  t9435 = -1.*t7561*t7016*t8098;
  t9446 = t8373*t7357;
  t9455 = t9435 + t9446;
  t9462 = t7316*t6857*t8098;
  t9477 = -1.*t7336*t8395;
  t9478 = t9462 + t9477;
  t9577 = -1.*t7561*t7016*t8373;
  t9578 = t7539*t7357;
  t9593 = t9577 + t9578;
  t9609 = t7316*t6857*t8373;
  t9618 = -1.*t7336*t8638;
  t9624 = t9609 + t9618;
  t9930 = t8681*t8703;
  t9931 = t8688*t7601;
  t9932 = t9930 + t9931;
  t9895 = t8681*t8857;
  t9911 = t8688*t8150;
  t9924 = t9895 + t9911;
  t9990 = -0.0641*t7414;
  t9992 = -0.28*t7525;
  t9994 = t9990 + t9992;
  t10002 = -1.*t7414;
  t10004 = 1. + t10002;
  t10005 = 0.075*t10004;
  t10012 = 0.355*t7414;
  t10014 = -0.0641*t7525;
  t10021 = t10005 + t10012 + t10014;
  t9988 = -0.325*t7421;
  t10000 = t7504*t9994;
  t10022 = t7421*t10021;
  t10025 = t9988 + t10000 + t10022;
  t9982 = -0.068*t7016;
  t10028 = t7316*t10025;
  t10033 = t9982 + t10028;
  t10039 = -1.*t7504;
  t10040 = 1. + t10039;
  t10041 = 0.325*t10040;
  t10045 = -1.*t7421*t9994;
  t10049 = t7504*t10021;
  t10053 = t10041 + t10045 + t10049;
  t10054 = t7561*t10053;
  t10055 = -1.*t7316;
  t10056 = 1. + t10055;
  t10057 = -0.1575*t10056;
  t10059 = -0.2255*t7316;
  t10070 = -1.*t7016*t10025;
  t10074 = t10057 + t10059 + t10070;
  t10075 = -1.*t10074*t7357;
  t10076 = t10054 + t10075;
  t8670 = t7016*t7336;
  t8672 = -1.*t7316*t6857*t7357;
  t8679 = t8670 + t8672;
  t10102 = t6857*t10033;
  t10110 = -1.*t7336*t10076;
  t10114 = t10102 + t10110;
  t10081 = t10033*t7336;
  t10086 = t6857*t10076;
  t10093 = t10081 + t10086;
  t10038 = -1.*t10033*t7336;
  t10077 = -1.*t6857*t10076;
  t10078 = t10038 + t10077;
  t10130 = t7561*t10074;
  t10131 = t10053*t7357;
  t10134 = t10130 + t10131;
  t10463 = -1.*t7561*t10074;
  t10464 = -1.*t10053*t7357;
  t10466 = t10463 + t10464;
  t10147 = t7316*t7561*t10134;
  t10148 = t8679*t10093;
  t10150 = t7370*t10114;
  t10153 = t10147 + t10148 + t10150;
  t10216 = -1.*t10134*t8703;
  t10230 = -1.*t10093*t8597;
  t10231 = -1.*t10114*t7601;
  t10232 = t10216 + t10230 + t10231;
  t10278 = t10134*t8703;
  t10283 = t10093*t8597;
  t10304 = t10114*t7601;
  t10306 = t10278 + t10283 + t10304;
  t10320 = -1.*t10134*t8857;
  t10321 = -1.*t10093*t8467;
  t10324 = -1.*t10114*t8150;
  t10326 = t10320 + t10321 + t10324;
  t10355 = -1.*t7316*t7561*t10134;
  t10368 = -1.*t8679*t10093;
  t10370 = -1.*t7370*t10114;
  t10371 = t10355 + t10368 + t10370;
  t10441 = t10134*t8857;
  t10442 = t10093*t8467;
  t10444 = t10114*t8150;
  t10449 = t10441 + t10442 + t10444;
  t8233 = -1.*t7016*t7539*t7336;
  t8243 = t7316*t6857*t7539*t7357;
  t8298 = t8233 + t8243;
  t10920 = 0.068*t7016;
  t10932 = -1.*t7316*t10025;
  t10934 = t10920 + t10932;
  t10947 = -0.068*t7316;
  t10965 = t10947 + t10070;
  t8206 = t7316*t7336;
  t8215 = t6857*t7016*t7357;
  t8226 = t8206 + t8215;
  t10966 = t10965*t7336;
  t10967 = -1.*t6857*t10934*t7357;
  t10968 = t10966 + t10967;
  t10971 = t6857*t10965;
  t10972 = t10934*t7336*t7357;
  t10974 = t10971 + t10972;
  t8311 = -1.*t7016*t7578*t7336;
  t8313 = t7316*t6857*t7578*t7357;
  t8316 = t8311 + t8313;
  t10918 = Power(t7561,2);
  t11061 = -0.325*t7504;
  t11063 = t11061 + t10045 + t10049;
  t11066 = 0.325*t7421;
  t11067 = -1.*t7504*t9994;
  t11068 = -1.*t7421*t10021;
  t11070 = t11066 + t11067 + t11068;
  t11077 = t7561*t11070;
  t11078 = t7016*t11063*t7357;
  t11082 = t11077 + t11078;
  t11065 = -1.*t7561*t7016*t11063;
  t11071 = t11070*t7357;
  t11073 = t11065 + t11071;
  t11075 = t7316*t11063*t7336;
  t11088 = t6857*t11082;
  t11090 = t11075 + t11088;
  t11095 = t7316*t6857*t11063;
  t11097 = -1.*t7336*t11082;
  t11099 = t11095 + t11097;
  t8353 = t7316*t8098*t7336;
  t8408 = t6857*t8395;
  t8412 = t8353 + t8408;
  t8618 = t7316*t8373*t7336;
  t8647 = t6857*t8638;
  t8654 = t8618 + t8647;
  t11212 = -0.28*t7414;
  t11213 = 0.0641*t7525;
  t11216 = t11212 + t11213;
  t11176 = t7421*t9994;
  t11237 = t7504*t11216;
  t11241 = t11176 + t11237;
  t11253 = -1.*t7421*t11216;
  t11255 = t10000 + t11253;
  t11266 = t7561*t11255;
  t11273 = t7016*t11241*t7357;
  t11275 = t11266 + t11273;
  t11245 = -1.*t7561*t7016*t11241;
  t11261 = t11255*t7357;
  t11262 = t11245 + t11261;
  t11264 = t7316*t11241*t7336;
  t11276 = t6857*t11275;
  t11279 = t11264 + t11276;
  t11283 = t7316*t6857*t11241;
  t11289 = -1.*t7336*t11275;
  t11301 = t11283 + t11289;
  t10469 = -1.*t7316*t7357*t10134;
  t10495 = -1.*t10134*t7595;
  t10527 = -1.*t10076*t8703;
  t10658 = t10134*t7595;
  t10660 = t10076*t8703;
  t10694 = -1.*t10076*t8857;
  t10695 = -1.*t10134*t8122;
  t10773 = t7316*t7357*t10134;
  t10801 = t10076*t8857;
  t10830 = t10134*t8122;
  t11456 = t7016*t10033;
  t11457 = -1.*t7316*t7357*t10076;
  t11459 = t11456 + t11457 + t10147;
  t10945 = t7316*t10918*t10934;
  t10970 = -1.*t7561*t7016*t10134;
  t10983 = t7316*t7561*t7539*t10134;
  t10984 = -1.*t7561*t10934*t8703;
  t11469 = -1.*t7316*t10033*t7539;
  t11470 = -1.*t10076*t7595;
  t11471 = t11469 + t11470 + t10216;
  t10996 = -1.*t7316*t7561*t7539*t10134;
  t10998 = t7561*t10934*t8703;
  t11479 = t7316*t10033*t7539;
  t11480 = t10076*t7595;
  t11481 = t11479 + t11480 + t10278;
  t11007 = t7316*t7561*t7578*t10134;
  t11008 = -1.*t7561*t10934*t8857;
  t11484 = -1.*t7316*t10033*t7578;
  t11485 = -1.*t10076*t8122;
  t11486 = t11484 + t10320 + t11485;
  t11496 = -1.*t7016*t10033;
  t11497 = t7316*t7357*t10076;
  t11498 = t11496 + t11497 + t10355;
  t11026 = -1.*t7316*t10918*t10934;
  t11519 = Power(t7357,2);
  t11031 = t7561*t7016*t10134;
  t11038 = -1.*t7316*t7561*t7578*t10134;
  t11039 = t7561*t10934*t8857;
  t11503 = t7316*t10033*t7578;
  t11505 = t10076*t8122;
  t11506 = t11503 + t10441 + t11505;
  t11074 = t7316*t7561*t11073;
  t11104 = -1.*t11073*t8703;
  t11594 = Power(t7316,2);
  t11117 = t11073*t8703;
  t11127 = -1.*t11073*t8857;
  t11128 = -1.*t10134*t9455;
  t11143 = -1.*t7316*t7561*t11073;
  t11155 = t11073*t8857;
  t11158 = t10134*t9455;
  t11263 = t7316*t7561*t11262;
  t11313 = -1.*t10134*t9593;
  t11314 = -1.*t11262*t8703;
  t11366 = t10134*t9593;
  t11367 = t11262*t8703;
  t11392 = -1.*t11262*t8857;
  t11413 = -1.*t7316*t7561*t11262;
  t11435 = t11262*t8857;
  t11556 = -1.*t7316*t10033;
  t11558 = -1.*t7016*t10965;
  t11564 = -1.*t7016*t10033*t7578;
  t11567 = t7316*t10965*t7578;
  t11517 = t7316*t10033;
  t11518 = t7016*t10965;
  t11524 = t7016*t10033*t7539;
  t11526 = -1.*t7316*t10965*t7539;
  t11535 = -1.*t7016*t10033*t7539;
  t11536 = t7316*t10965*t7539;
  t11542 = t7016*t10033*t7578;
  t11543 = -1.*t7316*t10965*t7578;
  t11744 = -1.*t7316*t10074;
  t11745 = t11496 + t11744;
  t11628 = t7316*t10033*t8098;
  t11630 = t11594*t11063*t7578;
  t11771 = t7316*t10074;
  t11774 = t11456 + t11771;
  t11595 = -1.*t11594*t11063*t7539;
  t11880 = Power(t7016,2);
  t11841 = -1.*t10053*t8098;
  t11842 = t7016*t10074*t7578;
  t11843 = t11841 + t11484 + t11842;
  t11853 = -1.*t7016*t10074*t7539;
  t11860 = t10053*t7578;
  t11861 = t11479 + t11853 + t11860;
  t11612 = -1.*t7316*t10033*t8098;
  t11614 = -1.*t11594*t11063*t7578;
  t11606 = t11594*t11063*t7539;
  t11751 = t10053*t8098;
  t11752 = -1.*t7016*t10074*t7578;
  t11716 = t11594*t11241*t7578;
  t11654 = -1.*t11594*t11241*t7539;
  t11657 = -1.*t7316*t10033*t8373;
  t11804 = t7016*t10074*t7539;
  t11809 = -1.*t10053*t7578;
  t11700 = -1.*t11594*t11241*t7578;
  t11682 = t11594*t11241*t7539;
  t11684 = t7316*t10033*t8373;
  t11753 = t11751 + t11503 + t11752;
  t11812 = t11469 + t11804 + t11809;
  t11942 = -1.*t11070*t8098;
  t11943 = -1.*t10053*t8373;
  t11948 = t11070*t7578;
  t12060 = t10025*t7539;
  t12065 = t12060 + t11860;
  t12081 = -1.*t10025*t7578;
  t12082 = t11841 + t12081;
  t11987 = -1.*t11255*t8098;
  t11993 = t10053*t7539;
  t12001 = t11255*t7578;
  t12195 = 0.325*t7525;
  t12197 = -1.*t10021*t7525;
  p_output1[0]=t7601*var2[0] + t7370*var2[1] + t8150*var2[2];
  p_output1[1]=t6857*t8196*var2[0] - 1.*t6857*t7316*t7561*var2[1] + t6857*t8183*var2[2];
  p_output1[2]=t8298*var2[0] + t8226*var2[1] + t8316*var2[2];
  p_output1[3]=t8467*var2[0] + t8412*var2[2];
  p_output1[4]=t8654*var2[0] + t8597*var2[2];
  p_output1[5]=t8597;
  p_output1[6]=t8679;
  p_output1[7]=t8467;
  p_output1[8]=(-1.*t7601*t8688 - 1.*t8681*t8703)*var2[0] + (-1.*t7316*t7561*t8681 - 1.*t7370*t8688)*var2[1] + (-1.*t8150*t8688 - 1.*t8681*t8857)*var2[2];
  p_output1[9]=-1.*t8681*t9069*var2[0] - 1.*t8681*t8990*var2[1] - 1.*t8681*t9094*var2[2];
  p_output1[10]=(t7336*t8196*t8681 + t7595*t8688)*var2[0] + (-1.*t7316*t7336*t7561*t8681 - 1.*t7316*t7357*t8688)*var2[1] + (t7336*t8183*t8681 + t8122*t8688)*var2[2];
  p_output1[11]=(-1.*t7316*t7539*t7561*t8688 - 1.*t8681*t9229)*var2[0] + (-1.*t7016*t7561*t8688 - 1.*t8681*t9172)*var2[1] + (-1.*t7316*t7561*t7578*t8688 - 1.*t8681*t9403)*var2[2];
  p_output1[12]=t9508*var2[0] + (t8688*t9455 - 1.*t8681*t9478)*var2[2];
  p_output1[13]=(t8688*t9593 - 1.*t8681*t9624)*var2[0] + t9562*var2[2];
  p_output1[14]=t9562;
  p_output1[15]=t9656;
  p_output1[16]=t9508;
  p_output1[17]=t9562*var2[0] + t9656*var2[1] + t9508*var2[2];
  p_output1[18]=t8688*t9069*var2[0] + t8688*t8990*var2[1] + t8688*t9094*var2[2];
  p_output1[19]=(t7595*t8681 - 1.*t7336*t8196*t8688)*var2[0] + (-1.*t7316*t7357*t8681 + t7316*t7336*t7561*t8688)*var2[1] + (t8122*t8681 - 1.*t7336*t8183*t8688)*var2[2];
  p_output1[20]=(-1.*t7316*t7539*t7561*t8681 + t8688*t9229)*var2[0] + (-1.*t7016*t7561*t8681 + t8688*t9172)*var2[1] + (-1.*t7316*t7561*t7578*t8681 + t8688*t9403)*var2[2];
  p_output1[21]=t9924*var2[0] + (t8681*t9455 + t8688*t9478)*var2[2];
  p_output1[22]=(t8681*t9593 + t8688*t9624)*var2[0] + t9932*var2[2];
  p_output1[23]=t9932;
  p_output1[24]=t7316*t7561*t8681 + t7370*t8688;
  p_output1[25]=t9924;
  p_output1[26]=(t10449*t7370 + t10371*t8150 + t8467*(-1.*t10078*t7370 - 1.*t10093*t7370 - 1.*t10114*t8679 - 1.*t10114*t8990) + t8679*(t10078*t8150 + t10093*t8150 + t10114*t8467 + t10114*t9094))*var2[0] + (t10326*t7601 + t10306*t8150 + t8467*(t10078*t7601 + t10093*t7601 + t10114*t8597 + t10114*t9069) + t8597*(-1.*t10078*t8150 - 1.*t10093*t8150 - 1.*t10114*t8467 - 1.*t10114*t9094))*var2[1] + (t10232*t7370 + t10153*t7601 + t8597*(t10078*t7370 + t10093*t7370 + t10114*t8679 + t10114*t8990) + t8679*(-1.*t10078*t7601 - 1.*t10093*t7601 - 1.*t10114*t8597 - 1.*t10114*t9069))*var2[2];
  p_output1[27]=(-1.*t10449*t6857*t7316*t7561 + t10371*t6857*t8183 + (t10801 + t10830 - 1.*t10466*t7336*t8150 + t10093*t6857*t8183 - 1.*t10114*t7336*t8183 + t10466*t6857*t8467)*t8679 + t8467*(t10773 + t10466*t7336*t7370 - 1.*t10076*t7316*t7561 + t10093*t6857*t7316*t7561 - 1.*t10114*t7316*t7336*t7561 - 1.*t10466*t6857*t8679))*var2[0] + (t10306*t6857*t8183 + t10326*t6857*t8196 + (t10694 + t10695 + t10466*t7336*t8150 - 1.*t10093*t6857*t8183 + t10114*t7336*t8183 - 1.*t10466*t6857*t8467)*t8597 + t8467*(t10658 + t10660 - 1.*t10466*t7336*t7601 + t10093*t6857*t8196 - 1.*t10114*t7336*t8196 + t10466*t6857*t8597))*var2[1] + (-1.*t10232*t6857*t7316*t7561 + t10153*t6857*t8196 + (t10495 + t10527 + t10466*t7336*t7601 - 1.*t10093*t6857*t8196 + t10114*t7336*t8196 - 1.*t10466*t6857*t8597)*t8679 + t8597*(t10469 - 1.*t10466*t7336*t7370 + t10076*t7316*t7561 - 1.*t10093*t6857*t7316*t7561 + t10114*t7316*t7336*t7561 + t10466*t6857*t8679))*var2[2];
  p_output1[28]=(t10449*t8226 + t10371*t8316 + t8467*(t11026 + t11031 - 1.*t10974*t7370 - 1.*t10093*t8226 - 1.*t10968*t8679 - 1.*t10114*t9172) + t8679*(t11038 + t11039 + t10974*t8150 + t10093*t8316 + t10968*t8467 + t10114*t9403))*var2[0] + (t10326*t8298 + t10306*t8316 + t8467*(t10996 + t10998 + t10974*t7601 + t10093*t8298 + t10968*t8597 + t10114*t9229) + t8597*(t11007 + t11008 - 1.*t10974*t8150 - 1.*t10093*t8316 - 1.*t10968*t8467 - 1.*t10114*t9403))*var2[1] + (t10232*t8226 + t10153*t8298 + t8597*(t10945 + t10970 + t10974*t7370 + t10093*t8226 + t10968*t8679 + t10114*t9172) + t8679*(t10983 + t10984 - 1.*t10974*t7601 - 1.*t10093*t8298 - 1.*t10968*t8597 - 1.*t10114*t9229))*var2[2];
  p_output1[29]=(t10371*t8412 + t8467*(t11143 - 1.*t11099*t7370 - 1.*t11090*t8679) + t8679*(t11155 + t11158 + t11099*t8150 + t10093*t8412 + t11090*t8467 + t10114*t9478))*var2[0] + (t10306*t8412 + t10326*t8467 + t8467*(t10441 + t10442 + t10444 + t11117 + t11099*t7601 + t11090*t8597) + t8597*(t11127 + t11128 - 1.*t11099*t8150 - 1.*t10093*t8412 - 1.*t11090*t8467 - 1.*t10114*t9478))*var2[1] + (t10153*t8467 + (t10320 + t10321 + t10324 + t11104 - 1.*t11099*t7601 - 1.*t11090*t8597)*t8679 + t8597*(t11074 + t11099*t7370 + t11090*t8679))*var2[2];
  p_output1[30]=(t10371*t8597 + (t10278 + t10283 + t10304 + t11435 + t11301*t8150 + t11279*t8467)*t8679 + t8467*(t11413 - 1.*t11301*t7370 - 1.*t11279*t8679))*var2[0] + (t10306*t8597 + (t10216 + t10230 + t10231 + t11392 - 1.*t11301*t8150 - 1.*t11279*t8467)*t8597 + t10326*t8654 + t8467*(t11366 + t11367 + t11301*t7601 + t11279*t8597 + t10093*t8654 + t10114*t9624))*var2[1] + (t10153*t8654 + t8597*(t11263 + t11301*t7370 + t11279*t8679) + t8679*(t11313 + t11314 - 1.*t11301*t7601 - 1.*t11279*t8597 - 1.*t10093*t8654 - 1.*t10114*t9624))*var2[2];
  p_output1[31]=t10371*t8467 + t10449*t8679;
  p_output1[32]=t10306*t8467 + t10326*t8597;
  p_output1[33]=t10153*t8597 + t10232*t8679;
  p_output1[34]=(-1.*t11506*t7316*t7357 + t11498*t8122 + t7316*t7561*(t10801 + t10830 + t10466*t8122 + t10076*t8183) + (t10773 + t10466*t7316*t7357)*t8857)*var2[0] + (t11486*t7595 + t11481*t8122 + (t10694 + t10695 - 1.*t10466*t8122 - 1.*t10076*t8183)*t8703 + (t10658 + t10660 + t10466*t7595 + t10076*t8196)*t8857)*var2[1] + (-1.*t11471*t7316*t7357 + t11459*t7595 + t7316*t7561*(t10495 + t10527 - 1.*t10466*t7595 - 1.*t10076*t8196) + (t10469 - 1.*t10466*t7316*t7357)*t8703)*var2[2];
  p_output1[35]=(-1.*t11506*t7016*t7561 - 1.*t11498*t7316*t7561*t7578 + t7316*t7561*(t11038 + t11039 + t11564 + t11567 + t10076*t7316*t7357*t7578 - 1.*t10934*t7357*t8122) + (t11026 + t11031 + t11556 + t11558 - 1.*t10934*t11519*t7316 - 1.*t10076*t7016*t7357)*t8857)*var2[0] + (-1.*t11486*t7316*t7539*t7561 - 1.*t11481*t7316*t7561*t7578 + (t11007 + t11008 + t11542 + t11543 - 1.*t10076*t7316*t7357*t7578 + t10934*t7357*t8122)*t8703 + (t10996 + t10998 + t11535 + t11536 + t10076*t7316*t7357*t7539 - 1.*t10934*t7357*t7595)*t8857)*var2[1] + (-1.*t11471*t7016*t7561 - 1.*t11459*t7316*t7539*t7561 + t7316*t7561*(t10983 + t10984 + t11524 + t11526 - 1.*t10076*t7316*t7357*t7539 + t10934*t7357*t7595) + (t10945 + t10970 + t11517 + t11518 + t10934*t11519*t7316 + t10076*t7016*t7357)*t8703)*var2[2];
  p_output1[36]=(t7316*t7561*(t11155 + t11158 + t11628 + t11630 + t11082*t8122 + t10076*t8395) + (t11143 - 1.*t11063*t7016*t7316 + t11082*t7316*t7357)*t8857 + t11498*t9455)*var2[0] + ((t11127 + t11128 + t11612 + t11614 - 1.*t11082*t8122 - 1.*t10076*t8395)*t8703 + t11486*t8857 + (t10441 + t11117 + t11503 + t11505 + t11606 + t11082*t7595)*t8857 + t11481*t9455)*var2[1] + (t7316*t7561*(t10320 + t11104 + t11484 + t11485 + t11595 - 1.*t11082*t7595) + (t11074 + t11063*t7016*t7316 - 1.*t11082*t7316*t7357)*t8703 + t11459*t8857)*var2[2];
  p_output1[37]=(t7316*t7561*(t10278 + t11435 + t11479 + t11480 + t11716 + t11275*t8122) + t11498*t8703 + (t11413 - 1.*t11241*t7016*t7316 + t11275*t7316*t7357)*t8857)*var2[0] + (t11481*t8703 + (t10216 + t11392 + t11469 + t11470 + t11700 - 1.*t11275*t8122)*t8703 + (t11366 + t11367 + t11682 + t11684 + t11275*t7595 + t10076*t8638)*t8857 + t11486*t9593)*var2[1] + (t7316*t7561*(t11313 + t11314 + t11654 + t11657 - 1.*t11275*t7595 - 1.*t10076*t8638) + (t11263 + t11241*t7016*t7316 - 1.*t11275*t7316*t7357)*t8703 + t11459*t9593)*var2[2];
  p_output1[38]=t11506*t7316*t7561 + t11498*t8857;
  p_output1[39]=t11486*t8703 + t11481*t8857;
  p_output1[40]=t11471*t7316*t7561 + t11459*t8703;
  p_output1[41]=(t11753*t7316 - 1.*t11745*t7016*t7578 + t7316*(t11556 + t11558 + t10074*t7016 - 1.*t10934*t7316)*t7578 + t7016*(t11564 + t11567 - 1.*t10934*t7016*t7578 - 1.*t10074*t7316*t7578))*var2[0] + (-1.*t11843*t7016*t7539 - 1.*t11861*t7016*t7578 + t7316*(t11535 + t11536 - 1.*t10934*t7016*t7539 - 1.*t10074*t7316*t7539)*t7578 + t7316*t7539*(t11542 + t11543 + t10934*t7016*t7578 + t10074*t7316*t7578))*var2[1] + (t11812*t7316 - 1.*t11774*t7016*t7539 + t7316*(t11517 + t11518 - 1.*t10074*t7016 + t10934*t7316)*t7539 + t7016*(t11524 + t11526 + t10934*t7016*t7539 + t10074*t7316*t7539))*var2[2];
  p_output1[42]=(t11745*t7316*t8098 + t7016*(t11628 + t11630 + t11063*t11880*t7578 + t11070*t8098 - 1.*t10074*t7016*t8098 + t10053*t8373))*var2[0] + (t11843*t7316*t7578 + t7316*(t11503 + t11606 + t11751 + t11752 + t11948 + t11063*t11880*t7539)*t7578 + t11861*t7316*t8098 + t7316*t7539*(t11612 + t11614 + t11942 + t11943 - 1.*t11063*t11880*t7578 + t10074*t7016*t8098))*var2[1] + (t11774*t7316*t7578 + t7016*(t11484 + t11595 + t11841 + t11842 - 1.*t11063*t11880*t7539 - 1.*t11070*t7578))*var2[2];
  p_output1[43]=(t11745*t7316*t7539 + t7016*(t11479 + t11716 + t11853 + t11860 + t11241*t11880*t7578 + t11255*t8098))*var2[0] + (t11861*t7316*t7539 + t7316*t7539*(t11469 + t11700 + t11804 + t11809 + t11987 - 1.*t11241*t11880*t7578) + t11843*t7316*t8373 + t7316*t7578*(t11682 + t11684 + t11993 + t12001 + t11241*t11880*t7539 - 1.*t10074*t7016*t8373))*var2[1] + (t11774*t7316*t8373 + t7016*(t11654 + t11657 - 1.*t10053*t7539 - 1.*t11241*t11880*t7539 - 1.*t11255*t7578 + t10074*t7016*t8373))*var2[2];
  p_output1[44]=t11753*t7016 + t11745*t7316*t7578;
  p_output1[45]=t11843*t7316*t7539 + t11861*t7316*t7578;
  p_output1[46]=t11812*t7016 + t11774*t7316*t7539;
  p_output1[47]=(0.1575*t7578 + 0.2255*t8373)*var2[0] + (t12082*t8098 + (t11751 + t11948 + t11063*t7539 + t10025*t7578)*t8098 + t7578*(t11942 + t11943 - 1.*t11063*t7578 - 1.*t10025*t8098) + t12065*t8373)*var2[1] - 0.068*t8098*var2[2];
  p_output1[48]=(0.2255*t7578 + 0.1575*t8373)*var2[0] + (t12082*t7539 + t12065*t7578 + t7578*(t11809 + t11987 - 1.*t10025*t7539 - 1.*t11241*t7578) + t8098*(t11993 + t12001 + t11241*t7539 + t10025*t8373))*var2[1] - 0.068*t7539*var2[2];
  p_output1[49]=0.1575*t7539 + 0.2255*t8098;
  p_output1[50]=t12082*t7578 + t12065*t8098;
  p_output1[51]=-0.068*t7578;
  p_output1[52]=(0.325*t7414 - 1.*t10021*t7414 - 1.*t11216*t7414)*var2[0] + (t12195 + t12197 - 1.*t11216*t7525)*var2[2];
  p_output1[53]=t12195 + t12197 - 1.*t7414*t9994;
  p_output1[54]=-0.325*t7414 + t10021*t7414 - 1.*t7525*t9994;
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
