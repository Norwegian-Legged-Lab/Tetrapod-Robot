/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:32:34 GMT+02:00
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
static void output1(double *p_output1,const double *var1)
{
  double t2297;
  double t10725;
  double t10729;
  double t14564;
  double t2520;
  double t11615;
  double t3953;
  double t15028;
  double t17736;
  double t7338;
  double t17738;
  double t17786;
  double t17936;
  double t17989;
  double t10851;
  double t17993;
  double t17994;
  double t18052;
  double t18314;
  double t18316;
  double t18554;
  double t18556;
  double t18586;
  double t18617;
  double t18661;
  double t18663;
  double t18733;
  double t18800;
  double t18851;
  double t18936;
  double t19305;
  double t19527;
  double t19933;
  double t20099;
  double t11643;
  double t12166;
  double t17188;
  double t17443;
  double t7441;
  double t7804;
  double t11364;
  double t11429;
  double t18590;
  double t18596;
  double t19309;
  double t19343;
  double t23143;
  double t23198;
  double t23206;
  double t23629;
  double t23661;
  double t23684;
  double t23428;
  double t23514;
  double t23618;
  double t23856;
  double t23858;
  double t23892;
  double t24768;
  double t24806;
  double t25072;
  double t25732;
  double t25825;
  double t26113;
  double t26594;
  double t26783;
  double t27141;
  double t27153;
  double t27154;
  double t27155;
  double t27217;
  double t27218;
  double t27239;
  double t27475;
  double t27476;
  double t27477;
  double t27481;
  double t27482;
  double t27483;
  double t27564;
  double t27565;
  double t27566;
  double t27571;
  double t27575;
  double t27584;
  double t29507;
  double t29520;
  double t29546;
  double t30622;
  double t31003;
  double t31136;
  double t31231;
  double t31242;
  double t31357;
  double t31403;
  double t31421;
  double t31935;
  double t31953;
  double t31990;
  double t32079;
  double t32091;
  double t32118;
  double t32151;
  double t32160;
  double t32174;
  double t32192;
  double t32202;
  double t32211;
  double t32246;
  double t32249;
  double t32256;
  double t32286;
  double t32291;
  double t32298;
  double t33185;
  double t33374;
  double t33481;
  double t33492;
  double t33500;
  double t33590;
  double t33695;
  double t33711;
  double t33733;
  double t33770;
  double t33880;
  double t33881;
  double t33894;
  double t33904;
  double t33921;
  double t33927;
  double t33938;
  double t33950;
  double t34096;
  double t34097;
  double t34101;
  double t34145;
  double t34149;
  double t34164;
  double t34184;
  double t34201;
  double t34205;
  double t34264;
  double t34268;
  double t34292;
  double t34221;
  double t34246;
  double t34260;
  double t34297;
  double t34303;
  double t34304;
  double t34483;
  double t34494;
  double t34507;
  double t34596;
  double t34608;
  double t34616;
  double t34814;
  double t34816;
  double t34821;
  double t34976;
  double t34979;
  double t35030;
  double t35081;
  double t35160;
  double t35193;
  double t35296;
  double t35303;
  double t35308;
  double t35517;
  double t35522;
  double t35534;
  double t35594;
  double t35595;
  double t35597;
  double t35678;
  double t35683;
  double t35690;
  double t35695;
  double t35716;
  double t35730;
  double t36316;
  double t36614;
  double t36650;
  t2297 = Cos(var1[4]);
  t10725 = Cos(var1[5]);
  t10729 = Sin(var1[4]);
  t14564 = Sin(var1[5]);
  t2520 = Sin(var1[9]);
  t11615 = Cos(var1[9]);
  t3953 = Sin(var1[15]);
  t15028 = Cos(var1[15]);
  t17736 = Sin(var1[10]);
  t7338 = Cos(var1[10]);
  t17738 = t11615*t2297;
  t17786 = -1.*t2520*t10729*t14564;
  t17936 = t17738 + t17786;
  t17989 = Sin(var1[16]);
  t10851 = Cos(var1[16]);
  t17993 = t15028*t2297;
  t17994 = -1.*t3953*t10729*t14564;
  t18052 = t17993 + t17994;
  t18314 = Sin(var1[11]);
  t18316 = t10725*t17736*t10729;
  t18554 = t7338*t17936;
  t18556 = t18316 + t18554;
  t18586 = Cos(var1[11]);
  t18617 = -1.*t7338*t10725*t10729;
  t18661 = t17736*t17936;
  t18663 = t18617 + t18661;
  t18733 = Sin(var1[17]);
  t18800 = t10725*t17989*t10729;
  t18851 = t10851*t18052;
  t18936 = t18800 + t18851;
  t19305 = Cos(var1[17]);
  t19527 = -1.*t10851*t10725*t10729;
  t19933 = t17989*t18052;
  t20099 = t19527 + t19933;
  t11643 = -1.*t11615;
  t12166 = 1. + t11643;
  t17188 = -1.*t15028;
  t17443 = 1. + t17188;
  t7441 = -1.*t7338;
  t7804 = 1. + t7441;
  t11364 = -1.*t10851;
  t11429 = 1. + t11364;
  t18590 = -1.*t18586;
  t18596 = 1. + t18590;
  t19309 = -1.*t19305;
  t19343 = 1. + t19309;
  t23143 = t2297*t10725*t2520*t17736;
  t23198 = -1.*t7338*t2297*t14564;
  t23206 = t23143 + t23198;
  t23629 = t7338*t2297*t10725*t2520;
  t23661 = t2297*t17736*t14564;
  t23684 = t23629 + t23661;
  t23428 = t2297*t10725*t3953*t17989;
  t23514 = -1.*t10851*t2297*t14564;
  t23618 = t23428 + t23514;
  t23856 = t10851*t2297*t10725*t3953;
  t23858 = t2297*t17989*t14564;
  t23892 = t23856 + t23858;
  t24768 = -1.*t2520*t10729;
  t24806 = t11615*t2297*t14564;
  t25072 = t24768 + t24806;
  t25732 = t11615*t10729;
  t25825 = t2297*t2520*t14564;
  t26113 = t25732 + t25825;
  t26594 = -1.*t2297*t10725*t17736;
  t26783 = t7338*t26113;
  t27141 = t26594 + t26783;
  t27153 = -1.*t7338*t2297*t10725;
  t27154 = -1.*t17736*t26113;
  t27155 = t27153 + t27154;
  t27217 = t7338*t2297*t10725;
  t27218 = t17736*t26113;
  t27239 = t27217 + t27218;
  t27475 = -1.*t3953*t10729;
  t27476 = t15028*t2297*t14564;
  t27477 = t27475 + t27476;
  t27481 = t15028*t10729;
  t27482 = t2297*t3953*t14564;
  t27483 = t27481 + t27482;
  t27564 = -1.*t2297*t10725*t17989;
  t27565 = t10851*t27483;
  t27566 = t27564 + t27565;
  t27571 = -1.*t10851*t2297*t10725;
  t27575 = -1.*t17989*t27483;
  t27584 = t27571 + t27575;
  t29507 = t10851*t2297*t10725;
  t29520 = t17989*t27483;
  t29546 = t29507 + t29520;
  t30622 = Cos(var1[3]);
  t31003 = t30622*t10725*t10729;
  t31136 = Sin(var1[3]);
  t31231 = -1.*t31136*t14564;
  t31242 = t31003 + t31231;
  t31357 = -1.*t10725*t31136;
  t31403 = -1.*t30622*t10729*t14564;
  t31421 = t31357 + t31403;
  t31935 = -1.*t11615*t30622*t2297;
  t31953 = -1.*t2520*t31421;
  t31990 = t31935 + t31953;
  t32079 = -1.*t15028*t30622*t2297;
  t32091 = -1.*t3953*t31421;
  t32118 = t32079 + t32091;
  t32151 = -1.*t17736*t31242;
  t32160 = t7338*t31990;
  t32174 = t32151 + t32160;
  t32192 = t7338*t31242;
  t32202 = t17736*t31990;
  t32211 = t32192 + t32202;
  t32246 = -1.*t17989*t31242;
  t32249 = t10851*t32118;
  t32256 = t32246 + t32249;
  t32286 = t10851*t31242;
  t32291 = t17989*t32118;
  t32298 = t32286 + t32291;
  t33185 = t11615*t31136*t10729;
  t33374 = t2297*t2520*t31136*t14564;
  t33481 = t33185 + t33374;
  t33492 = t15028*t31136*t10729;
  t33500 = t2297*t3953*t31136*t14564;
  t33590 = t33492 + t33500;
  t33695 = -1.*t2297*t10725*t17736*t31136;
  t33711 = t7338*t33481;
  t33733 = t33695 + t33711;
  t33770 = t7338*t2297*t10725*t31136;
  t33880 = t17736*t33481;
  t33881 = t33770 + t33880;
  t33894 = -1.*t2297*t10725*t17989*t31136;
  t33904 = t10851*t33590;
  t33921 = t33894 + t33904;
  t33927 = t10851*t2297*t10725*t31136;
  t33938 = t17989*t33590;
  t33950 = t33927 + t33938;
  t34096 = -1.*t10725*t31136*t10729;
  t34097 = -1.*t30622*t14564;
  t34101 = t34096 + t34097;
  t34145 = t30622*t10725;
  t34149 = -1.*t31136*t10729*t14564;
  t34164 = t34145 + t34149;
  t34184 = -1.*t2520*t17736*t34101;
  t34201 = t7338*t34164;
  t34205 = t34184 + t34201;
  t34264 = -1.*t7338*t2520*t34101;
  t34268 = -1.*t17736*t34164;
  t34292 = t34264 + t34268;
  t34221 = -1.*t3953*t17989*t34101;
  t34246 = t10851*t34164;
  t34260 = t34221 + t34246;
  t34297 = -1.*t10851*t3953*t34101;
  t34303 = -1.*t17989*t34164;
  t34304 = t34297 + t34303;
  t34483 = t2297*t2520*t31136;
  t34494 = -1.*t11615*t34164;
  t34507 = t34483 + t34494;
  t34596 = -1.*t11615*t2297*t31136;
  t34608 = -1.*t2520*t34164;
  t34616 = t34596 + t34608;
  t34814 = t10725*t31136*t10729;
  t34816 = t30622*t14564;
  t34821 = t34814 + t34816;
  t34976 = -1.*t17736*t34821;
  t34979 = t7338*t34616;
  t35030 = t34976 + t34979;
  t35081 = -1.*t7338*t34821;
  t35160 = -1.*t17736*t34616;
  t35193 = t35081 + t35160;
  t35296 = t7338*t34821;
  t35303 = t17736*t34616;
  t35308 = t35296 + t35303;
  t35517 = t2297*t3953*t31136;
  t35522 = -1.*t15028*t34164;
  t35534 = t35517 + t35522;
  t35594 = -1.*t15028*t2297*t31136;
  t35595 = -1.*t3953*t34164;
  t35597 = t35594 + t35595;
  t35678 = -1.*t17989*t34821;
  t35683 = t10851*t35597;
  t35690 = t35678 + t35683;
  t35695 = -1.*t10851*t34821;
  t35716 = -1.*t17989*t35597;
  t35730 = t35695 + t35716;
  t36316 = t10851*t34821;
  t36614 = t17989*t35597;
  t36650 = t36316 + t36614;
  p_output1[0]=-0.325*t10725*t10729*t11429 + 0.1575*t10729*t12166*t14564 + 0.1575*t10729*t14564*t17443 + 0.325*t17736*t17936 - 0.325*t17989*t18052 - 0.575*t18314*t18556 - 0.575*t18596*t18663 - 0.0641*(t18556*t18586 + t18314*t18663) - 0.295*(-1.*t18314*t18556 + t18586*t18663) + 0.575*t18733*t18936 + 0.575*t19343*t20099 + 0.0641*(t18936*t19305 + t18733*t20099) + 0.295*(-1.*t18733*t18936 + t19305*t20099) - 0.1575*t2297*t2520 + 0.2255*(t10729*t11615*t14564 + t2297*t2520) - 0.1575*t2297*t3953 + 0.2255*(t10729*t14564*t15028 + t2297*t3953) + 0.325*t10725*t10729*t7804;
  p_output1[1]=-0.2255*t10725*t11615*t2297 - 0.1575*t10725*t12166*t2297 - 0.325*t11429*t14564*t2297 - 0.2255*t10725*t15028*t2297 - 0.1575*t10725*t17443*t2297 - 0.575*t18596*t23206 + 0.575*t19343*t23618 - 0.575*t18314*t23684 - 0.295*(t18586*t23206 - 1.*t18314*t23684) - 0.0641*(t18314*t23206 + t18586*t23684) + 0.575*t18733*t23892 + 0.295*(t19305*t23618 - 1.*t18733*t23892) + 0.0641*(t18733*t23618 + t19305*t23892) + 0.325*t10725*t17736*t2297*t2520 - 0.325*t10725*t17989*t2297*t3953 + 0.325*t14564*t2297*t7804;
  p_output1[2]=-0.1575*t10729*t11615 + 0.325*t17736*t25072 - 0.575*t17736*t18596*t25072 - 0.1575*t14564*t2297*t2520 + 0.2255*t26113 - 0.575*t18314*t25072*t7338 - 0.295*(t17736*t18586*t25072 - 1.*t18314*t25072*t7338) - 0.0641*(t17736*t18314*t25072 + t18586*t25072*t7338);
  p_output1[3]=-0.325*t10725*t17736*t2297 - 0.575*t18596*t27141 - 0.575*t18314*t27155 - 0.295*(t18586*t27141 - 1.*t18314*t27155) - 0.0641*(t18314*t27141 + t18586*t27155) + 0.325*t26113*t7338;
  p_output1[4]=-0.575*t18586*t27141 - 0.575*t18314*t27239 - 0.295*(-1.*t18586*t27141 - 1.*t18314*t27239) - 0.0641*(-1.*t18314*t27141 + t18586*t27239);
  p_output1[5]=-0.1575*t10729*t15028 - 0.325*t17989*t27477 + 0.575*t10851*t18733*t27477 + 0.575*t17989*t19343*t27477 + 0.0641*(t17989*t18733*t27477 + t10851*t19305*t27477) + 0.295*(-1.*t10851*t18733*t27477 + t17989*t19305*t27477) + 0.2255*t27483 - 0.1575*t14564*t2297*t3953;
  p_output1[6]=0.325*t10725*t17989*t2297 - 0.325*t10851*t27483 + 0.575*t19343*t27566 + 0.575*t18733*t27584 + 0.295*(t19305*t27566 - 1.*t18733*t27584) + 0.0641*(t18733*t27566 + t19305*t27584);
  p_output1[7]=0.575*t19305*t27566 + 0.575*t18733*t29546 + 0.295*(-1.*t19305*t27566 - 1.*t18733*t29546) + 0.0641*(-1.*t18733*t27566 + t19305*t29546);
  p_output1[8]=0.1575*t2297*t2520*t30622 + 0.325*t11429*t31242 + 0.1575*t12166*t31421 + 0.1575*t17443*t31421 + 0.2255*(-1.*t2297*t2520*t30622 + t11615*t31421) + 0.325*t17736*t31990 - 0.325*t17989*t32118 - 0.575*t18314*t32174 - 0.575*t18596*t32211 - 0.0641*(t18586*t32174 + t18314*t32211) - 0.295*(-1.*t18314*t32174 + t18586*t32211) + 0.575*t18733*t32256 + 0.575*t19343*t32298 + 0.0641*(t19305*t32256 + t18733*t32298) + 0.295*(-1.*t18733*t32256 + t19305*t32298) + 0.1575*t2297*t30622*t3953 + 0.2255*(t15028*t31421 - 1.*t2297*t30622*t3953) - 0.325*t31242*t7804;
  p_output1[9]=0.325*t10725*t11429*t2297*t31136 - 0.1575*t12166*t14564*t2297*t31136 - 0.1575*t14564*t17443*t2297*t31136 - 0.1575*t10729*t2520*t31136 + 0.2255*(-1.*t11615*t14564*t2297*t31136 + t10729*t2520*t31136) + 0.325*t17736*t33481 - 0.325*t17989*t33590 - 0.575*t18314*t33733 - 0.575*t18596*t33881 - 0.0641*(t18586*t33733 + t18314*t33881) - 0.295*(-1.*t18314*t33733 + t18586*t33881) + 0.575*t18733*t33921 + 0.575*t19343*t33950 + 0.0641*(t19305*t33921 + t18733*t33950) + 0.295*(-1.*t18733*t33921 + t19305*t33950) - 0.1575*t10729*t31136*t3953 + 0.2255*(-1.*t14564*t15028*t2297*t31136 + t10729*t31136*t3953) - 0.325*t10725*t2297*t31136*t7804;
  p_output1[10]=0.2255*t11615*t34101 + 0.1575*t12166*t34101 + 0.2255*t15028*t34101 + 0.1575*t17443*t34101 - 0.325*t17736*t2520*t34101 + 0.325*t11429*t34164 - 0.575*t18596*t34205 + 0.575*t19343*t34260 - 0.575*t18314*t34292 - 0.295*(t18586*t34205 - 1.*t18314*t34292) - 0.0641*(t18314*t34205 + t18586*t34292) + 0.575*t18733*t34304 + 0.295*(t19305*t34260 - 1.*t18733*t34304) + 0.0641*(t18733*t34260 + t19305*t34304) + 0.325*t17989*t34101*t3953 - 0.325*t34164*t7804;
  p_output1[11]=0.1575*t11615*t2297*t31136 + 0.1575*t2520*t34164 + 0.325*t17736*t34507 - 0.575*t17736*t18596*t34507 + 0.2255*t34616 - 0.575*t18314*t34507*t7338 - 0.295*(t17736*t18586*t34507 - 1.*t18314*t34507*t7338) - 0.0641*(t17736*t18314*t34507 + t18586*t34507*t7338);
  p_output1[12]=-0.325*t17736*t34821 - 0.575*t18596*t35030 - 0.575*t18314*t35193 - 0.295*(t18586*t35030 - 1.*t18314*t35193) - 0.0641*(t18314*t35030 + t18586*t35193) + 0.325*t34616*t7338;
  p_output1[13]=-0.575*t18586*t35030 - 0.575*t18314*t35308 - 0.295*(-1.*t18586*t35030 - 1.*t18314*t35308) - 0.0641*(-1.*t18314*t35030 + t18586*t35308);
  p_output1[14]=0.1575*t15028*t2297*t31136 - 0.325*t17989*t35534 + 0.575*t10851*t18733*t35534 + 0.575*t17989*t19343*t35534 + 0.0641*(t17989*t18733*t35534 + t10851*t19305*t35534) + 0.295*(-1.*t10851*t18733*t35534 + t17989*t19305*t35534) + 0.2255*t35597 + 0.1575*t34164*t3953;
  p_output1[15]=0.325*t17989*t34821 - 0.325*t10851*t35597 + 0.575*t19343*t35690 + 0.575*t18733*t35730 + 0.295*(t19305*t35690 - 1.*t18733*t35730) + 0.0641*(t18733*t35690 + t19305*t35730);
  p_output1[16]=0.575*t19305*t35690 + 0.575*t18733*t36650 + 0.295*(-1.*t19305*t35690 - 1.*t18733*t36650) + 0.0641*(-1.*t18733*t35690 + t19305*t36650);
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_step_distance_rear_DiagonalStance.hh"

namespace DiagonalStance
{

void J_step_distance_rear_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
