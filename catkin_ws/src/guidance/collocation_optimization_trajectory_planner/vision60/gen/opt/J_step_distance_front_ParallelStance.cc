/*
 * Automatically Generated from Mathematica.
 * Thu 12 May 2022 11:34:00 GMT+02:00
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
  double t12698;
  double t12707;
  double t13405;
  double t11029;
  double t12318;
  double t13375;
  double t13733;
  double t12510;
  double t13745;
  double t14519;
  double t14525;
  double t14569;
  double t14695;
  double t14833;
  double t14847;
  double t16848;
  double t24353;
  double t24357;
  double t27649;
  double t13411;
  double t31446;
  double t12718;
  double t32249;
  double t32286;
  double t32644;
  double t33590;
  double t33880;
  double t54454;
  double t54732;
  double t54788;
  double t54818;
  double t54901;
  double t54962;
  double t55051;
  double t13395;
  double t13401;
  double t13418;
  double t13435;
  double t12589;
  double t12693;
  double t12992;
  double t13050;
  double t17986;
  double t24216;
  double t55883;
  double t55893;
  double t55894;
  double t55914;
  double t55928;
  double t55931;
  double t35192;
  double t46731;
  double t56214;
  double t56225;
  double t56303;
  double t56307;
  double t56938;
  double t57450;
  double t57693;
  double t57837;
  double t57866;
  double t57682;
  double t57683;
  double t57690;
  double t58057;
  double t58058;
  double t58060;
  double t58040;
  double t58045;
  double t58048;
  double t58097;
  double t58099;
  double t58117;
  double t58172;
  double t58173;
  double t58179;
  double t58192;
  double t58193;
  double t58194;
  double t59013;
  double t59151;
  double t59152;
  double t59170;
  double t59172;
  double t59176;
  double t59278;
  double t59294;
  double t59296;
  double t59356;
  double t59364;
  double t59365;
  double t59367;
  double t59368;
  double t59379;
  double t59592;
  double t59599;
  double t59678;
  double t59691;
  double t59692;
  double t59694;
  double t60044;
  double t60092;
  double t60101;
  double t60108;
  double t60116;
  double t60154;
  double t60156;
  double t60164;
  double t60168;
  double t60169;
  double t60170;
  double t60176;
  double t60178;
  double t60179;
  double t60223;
  double t60229;
  double t60237;
  double t60249;
  double t60263;
  double t60264;
  double t60266;
  double t60267;
  double t60269;
  double t60341;
  double t60342;
  double t60344;
  double t60346;
  double t60347;
  double t60348;
  double t60350;
  double t60351;
  double t60352;
  double t60519;
  double t60521;
  double t60522;
  double t60532;
  double t60533;
  double t60535;
  double t60541;
  double t60579;
  double t60608;
  double t60610;
  double t60611;
  double t60618;
  double t60867;
  double t60868;
  double t60869;
  double t60871;
  double t60875;
  double t60879;
  double t61068;
  double t61069;
  double t61070;
  double t61034;
  double t61042;
  double t61044;
  double t61196;
  double t61506;
  double t61595;
  double t61797;
  double t61798;
  double t61799;
  double t61791;
  double t61794;
  double t61795;
  double t61811;
  double t61812;
  double t61813;
  double t61892;
  double t61898;
  double t61899;
  double t61923;
  double t61924;
  double t61925;
  double t62056;
  double t62077;
  double t62078;
  double t62091;
  double t62120;
  double t62123;
  double t62139;
  double t62140;
  double t62141;
  t12698 = Cos(var1[5]);
  t12707 = Sin(var1[4]);
  t13405 = Sin(var1[5]);
  t11029 = Cos(var1[4]);
  t12318 = Sin(var1[12]);
  t13375 = Cos(var1[12]);
  t13733 = Sin(var1[13]);
  t12510 = Cos(var1[13]);
  t13745 = t13375*t11029;
  t14519 = -1.*t12318*t12707*t13405;
  t14525 = t13745 + t14519;
  t14569 = Sin(var1[14]);
  t14695 = t12698*t13733*t12707;
  t14833 = t12510*t14525;
  t14847 = t14695 + t14833;
  t16848 = Cos(var1[14]);
  t24353 = -1.*t12510*t12698*t12707;
  t24357 = t13733*t14525;
  t27649 = t24353 + t24357;
  t13411 = Cos(var1[6]);
  t31446 = Sin(var1[6]);
  t12718 = Cos(var1[7]);
  t32249 = t11029*t13411;
  t32286 = -1.*t12707*t13405*t31446;
  t32644 = t32249 + t32286;
  t33590 = Sin(var1[7]);
  t33880 = Cos(var1[8]);
  t54454 = -1.*t12698*t12718*t12707;
  t54732 = t32644*t33590;
  t54788 = t54454 + t54732;
  t54818 = t12718*t32644;
  t54901 = t12698*t12707*t33590;
  t54962 = t54818 + t54901;
  t55051 = Sin(var1[8]);
  t13395 = -1.*t13375;
  t13401 = 1. + t13395;
  t13418 = -1.*t13411;
  t13435 = 1. + t13418;
  t12589 = -1.*t12510;
  t12693 = 1. + t12589;
  t12992 = -1.*t12718;
  t13050 = 1. + t12992;
  t17986 = -1.*t16848;
  t24216 = 1. + t17986;
  t55883 = t11029*t12698*t12318*t13733;
  t55893 = -1.*t12510*t11029*t13405;
  t55894 = t55883 + t55893;
  t55914 = t12510*t11029*t12698*t12318;
  t55928 = t11029*t13733*t13405;
  t55931 = t55914 + t55928;
  t35192 = -1.*t33880;
  t46731 = 1. + t35192;
  t56214 = -1.*t11029*t12718*t13405;
  t56225 = t11029*t12698*t31446*t33590;
  t56303 = t56214 + t56225;
  t56307 = t11029*t12698*t12718*t31446;
  t56938 = t11029*t13405*t33590;
  t57450 = t56307 + t56938;
  t57693 = t11029*t13411*t13405;
  t57837 = -1.*t12707*t31446;
  t57866 = t57693 + t57837;
  t57682 = t13411*t12707;
  t57683 = t11029*t13405*t31446;
  t57690 = t57682 + t57683;
  t58057 = -1.*t11029*t12698*t12718;
  t58058 = -1.*t57690*t33590;
  t58060 = t58057 + t58058;
  t58040 = t12718*t57690;
  t58045 = -1.*t11029*t12698*t33590;
  t58048 = t58040 + t58045;
  t58097 = t11029*t12698*t12718;
  t58099 = t57690*t33590;
  t58117 = t58097 + t58099;
  t58172 = -1.*t12318*t12707;
  t58173 = t13375*t11029*t13405;
  t58179 = t58172 + t58173;
  t58192 = t13375*t12707;
  t58193 = t11029*t12318*t13405;
  t58194 = t58192 + t58193;
  t59013 = -1.*t11029*t12698*t13733;
  t59151 = t12510*t58194;
  t59152 = t59013 + t59151;
  t59170 = -1.*t12510*t11029*t12698;
  t59172 = -1.*t13733*t58194;
  t59176 = t59170 + t59172;
  t59278 = t12510*t11029*t12698;
  t59294 = t13733*t58194;
  t59296 = t59278 + t59294;
  t59356 = Cos(var1[3]);
  t59364 = t59356*t12698*t12707;
  t59365 = Sin(var1[3]);
  t59367 = -1.*t59365*t13405;
  t59368 = t59364 + t59367;
  t59379 = -1.*t12698*t59365;
  t59592 = -1.*t59356*t12707*t13405;
  t59599 = t59379 + t59592;
  t59678 = -1.*t13375*t59356*t11029;
  t59691 = -1.*t12318*t59599;
  t59692 = t59678 + t59691;
  t59694 = -1.*t13733*t59368;
  t60044 = t12510*t59692;
  t60092 = t59694 + t60044;
  t60101 = t12510*t59368;
  t60108 = t13733*t59692;
  t60116 = t60101 + t60108;
  t60154 = -1.*t59356*t11029*t13411;
  t60156 = -1.*t59599*t31446;
  t60164 = t60154 + t60156;
  t60168 = t12718*t59368;
  t60169 = t60164*t33590;
  t60170 = t60168 + t60169;
  t60176 = t12718*t60164;
  t60178 = -1.*t59368*t33590;
  t60179 = t60176 + t60178;
  t60223 = t13375*t59365*t12707;
  t60229 = t11029*t12318*t59365*t13405;
  t60237 = t60223 + t60229;
  t60249 = -1.*t11029*t12698*t13733*t59365;
  t60263 = t12510*t60237;
  t60264 = t60249 + t60263;
  t60266 = t12510*t11029*t12698*t59365;
  t60267 = t13733*t60237;
  t60269 = t60266 + t60267;
  t60341 = t13411*t59365*t12707;
  t60342 = t11029*t59365*t13405*t31446;
  t60344 = t60341 + t60342;
  t60346 = t11029*t12698*t12718*t59365;
  t60347 = t60344*t33590;
  t60348 = t60346 + t60347;
  t60350 = t12718*t60344;
  t60351 = -1.*t11029*t12698*t59365*t33590;
  t60352 = t60350 + t60351;
  t60519 = -1.*t12698*t59365*t12707;
  t60521 = -1.*t59356*t13405;
  t60522 = t60519 + t60521;
  t60532 = t59356*t12698;
  t60533 = -1.*t59365*t12707*t13405;
  t60535 = t60532 + t60533;
  t60541 = -1.*t12318*t13733*t60522;
  t60579 = t12510*t60535;
  t60608 = t60541 + t60579;
  t60610 = -1.*t12510*t12318*t60522;
  t60611 = -1.*t13733*t60535;
  t60618 = t60610 + t60611;
  t60867 = t12718*t60535;
  t60868 = -1.*t60522*t31446*t33590;
  t60869 = t60867 + t60868;
  t60871 = -1.*t12718*t60522*t31446;
  t60875 = -1.*t60535*t33590;
  t60879 = t60871 + t60875;
  t61068 = -1.*t13411*t60535;
  t61069 = t11029*t59365*t31446;
  t61070 = t61068 + t61069;
  t61034 = -1.*t11029*t13411*t59365;
  t61042 = -1.*t60535*t31446;
  t61044 = t61034 + t61042;
  t61196 = t12698*t59365*t12707;
  t61506 = t59356*t13405;
  t61595 = t61196 + t61506;
  t61797 = -1.*t12718*t61595;
  t61798 = -1.*t61044*t33590;
  t61799 = t61797 + t61798;
  t61791 = t12718*t61044;
  t61794 = -1.*t61595*t33590;
  t61795 = t61791 + t61794;
  t61811 = t12718*t61595;
  t61812 = t61044*t33590;
  t61813 = t61811 + t61812;
  t61892 = t11029*t12318*t59365;
  t61898 = -1.*t13375*t60535;
  t61899 = t61892 + t61898;
  t61923 = -1.*t13375*t11029*t59365;
  t61924 = -1.*t12318*t60535;
  t61925 = t61923 + t61924;
  t62056 = -1.*t13733*t61595;
  t62077 = t12510*t61925;
  t62078 = t62056 + t62077;
  t62091 = -1.*t12510*t61595;
  t62120 = -1.*t13733*t61925;
  t62123 = t62091 + t62120;
  t62139 = t12510*t61595;
  t62140 = t13733*t61925;
  t62141 = t62139 + t62140;
  p_output1[0]=-0.1575*t11029*t12318 + 0.325*t12693*t12698*t12707 - 0.325*t12698*t12707*t13050 + 0.1575*t12707*t13401*t13405 + 0.2255*(t11029*t12318 + t12707*t13375*t13405) + 0.1575*t12707*t13405*t13435 + 0.325*t13733*t14525 - 0.075*t14569*t14847 - 0.075*t24216*t27649 + 0.0641*(t14847*t16848 + t14569*t27649) - 0.355*(-1.*t14569*t14847 + t16848*t27649) - 0.1575*t11029*t31446 + 0.2255*(t12707*t13405*t13411 + t11029*t31446) - 0.325*t32644*t33590 + 0.075*t46731*t54788 + 0.075*t54962*t55051 - 0.0641*(t33880*t54962 + t54788*t55051) + 0.355*(t33880*t54788 - 1.*t54962*t55051);
  p_output1[1]=-0.2255*t11029*t12698*t13375 - 0.1575*t11029*t12698*t13401 + 0.325*t11029*t12693*t13405 - 0.325*t11029*t13050*t13405 - 0.2255*t11029*t12698*t13411 - 0.1575*t11029*t12698*t13435 + 0.325*t11029*t12318*t12698*t13733 - 0.325*t11029*t12698*t31446*t33590 - 0.075*t24216*t55894 - 0.075*t14569*t55931 - 0.355*(t16848*t55894 - 1.*t14569*t55931) + 0.0641*(t14569*t55894 + t16848*t55931) + 0.075*t46731*t56303 + 0.075*t55051*t57450 - 0.0641*(t55051*t56303 + t33880*t57450) + 0.355*(t33880*t56303 - 1.*t55051*t57450);
  p_output1[2]=-0.1575*t12707*t13411 - 0.1575*t11029*t13405*t31446 + 0.2255*t57690 - 0.325*t33590*t57866 + 0.075*t33590*t46731*t57866 + 0.075*t12718*t55051*t57866 + 0.355*(t33590*t33880*t57866 - 1.*t12718*t55051*t57866) - 0.0641*(t12718*t33880*t57866 + t33590*t55051*t57866);
  p_output1[3]=0.325*t11029*t12698*t33590 - 0.325*t12718*t57690 + 0.075*t46731*t58048 + 0.075*t55051*t58060 - 0.0641*(t55051*t58048 + t33880*t58060) + 0.355*(t33880*t58048 - 1.*t55051*t58060);
  p_output1[4]=0.075*t33880*t58048 + 0.075*t55051*t58117 - 0.0641*(-1.*t55051*t58048 + t33880*t58117) + 0.355*(-1.*t33880*t58048 - 1.*t55051*t58117);
  p_output1[5]=-0.1575*t12707*t13375 - 0.1575*t11029*t12318*t13405 + 0.325*t13733*t58179 - 0.075*t12510*t14569*t58179 - 0.075*t13733*t24216*t58179 + 0.0641*(t13733*t14569*t58179 + t12510*t16848*t58179) - 0.355*(-1.*t12510*t14569*t58179 + t13733*t16848*t58179) + 0.2255*t58194;
  p_output1[6]=-0.325*t11029*t12698*t13733 + 0.325*t12510*t58194 - 0.075*t24216*t59152 - 0.075*t14569*t59176 - 0.355*(t16848*t59152 - 1.*t14569*t59176) + 0.0641*(t14569*t59152 + t16848*t59176);
  p_output1[7]=-0.075*t16848*t59152 - 0.075*t14569*t59296 - 0.355*(-1.*t16848*t59152 - 1.*t14569*t59296) + 0.0641*(-1.*t14569*t59152 + t16848*t59296);
  p_output1[8]=0.1575*t11029*t12318*t59356 + 0.1575*t11029*t31446*t59356 - 0.325*t12693*t59368 + 0.325*t13050*t59368 + 0.1575*t13401*t59599 + 0.1575*t13435*t59599 + 0.2255*(-1.*t11029*t12318*t59356 + t13375*t59599) + 0.2255*(-1.*t11029*t31446*t59356 + t13411*t59599) + 0.325*t13733*t59692 - 0.075*t14569*t60092 - 0.075*t24216*t60116 + 0.0641*(t16848*t60092 + t14569*t60116) - 0.355*(-1.*t14569*t60092 + t16848*t60116) - 0.325*t33590*t60164 + 0.075*t46731*t60170 + 0.075*t55051*t60179 - 0.0641*(t55051*t60170 + t33880*t60179) + 0.355*(t33880*t60170 - 1.*t55051*t60179);
  p_output1[9]=-0.325*t11029*t12693*t12698*t59365 - 0.1575*t12318*t12707*t59365 + 0.325*t11029*t12698*t13050*t59365 - 0.1575*t11029*t13401*t13405*t59365 - 0.1575*t11029*t13405*t13435*t59365 - 0.1575*t12707*t31446*t59365 + 0.2255*(t12318*t12707*t59365 - 1.*t11029*t13375*t13405*t59365) + 0.2255*(-1.*t11029*t13405*t13411*t59365 + t12707*t31446*t59365) + 0.325*t13733*t60237 - 0.075*t14569*t60264 - 0.075*t24216*t60269 + 0.0641*(t16848*t60264 + t14569*t60269) - 0.355*(-1.*t14569*t60264 + t16848*t60269) - 0.325*t33590*t60344 + 0.075*t46731*t60348 + 0.075*t55051*t60352 - 0.0641*(t55051*t60348 + t33880*t60352) + 0.355*(t33880*t60348 - 1.*t55051*t60352);
  p_output1[10]=0.2255*t13375*t60522 + 0.1575*t13401*t60522 + 0.2255*t13411*t60522 + 0.1575*t13435*t60522 - 0.325*t12318*t13733*t60522 + 0.325*t31446*t33590*t60522 - 0.325*t12693*t60535 + 0.325*t13050*t60535 - 0.075*t24216*t60608 - 0.075*t14569*t60618 - 0.355*(t16848*t60608 - 1.*t14569*t60618) + 0.0641*(t14569*t60608 + t16848*t60618) + 0.075*t46731*t60869 + 0.075*t55051*t60879 - 0.0641*(t55051*t60869 + t33880*t60879) + 0.355*(t33880*t60869 - 1.*t55051*t60879);
  p_output1[11]=0.1575*t11029*t13411*t59365 + 0.1575*t31446*t60535 + 0.2255*t61044 - 0.325*t33590*t61070 + 0.075*t33590*t46731*t61070 + 0.075*t12718*t55051*t61070 + 0.355*(t33590*t33880*t61070 - 1.*t12718*t55051*t61070) - 0.0641*(t12718*t33880*t61070 + t33590*t55051*t61070);
  p_output1[12]=-0.325*t12718*t61044 + 0.325*t33590*t61595 + 0.075*t46731*t61795 + 0.075*t55051*t61799 - 0.0641*(t55051*t61795 + t33880*t61799) + 0.355*(t33880*t61795 - 1.*t55051*t61799);
  p_output1[13]=0.075*t33880*t61795 + 0.075*t55051*t61813 - 0.0641*(-1.*t55051*t61795 + t33880*t61813) + 0.355*(-1.*t33880*t61795 - 1.*t55051*t61813);
  p_output1[14]=0.1575*t11029*t13375*t59365 + 0.1575*t12318*t60535 + 0.325*t13733*t61899 - 0.075*t12510*t14569*t61899 - 0.075*t13733*t24216*t61899 + 0.0641*(t13733*t14569*t61899 + t12510*t16848*t61899) - 0.355*(-1.*t12510*t14569*t61899 + t13733*t16848*t61899) + 0.2255*t61925;
  p_output1[15]=-0.325*t13733*t61595 + 0.325*t12510*t61925 - 0.075*t24216*t62078 - 0.075*t14569*t62123 - 0.355*(t16848*t62078 - 1.*t14569*t62123) + 0.0641*(t14569*t62078 + t16848*t62123);
  p_output1[16]=-0.075*t16848*t62078 - 0.075*t14569*t62141 - 0.355*(-1.*t16848*t62078 - 1.*t14569*t62141) + 0.0641*(-1.*t14569*t62078 + t16848*t62141);
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

#include "J_step_distance_front_ParallelStance.hh"

namespace ParallelStance
{

void J_step_distance_front_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
