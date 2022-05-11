/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:47:06 GMT+02:00
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
  double t12298;
  double t12464;
  double t13119;
  double t11205;
  double t11241;
  double t13008;
  double t13295;
  double t12283;
  double t13335;
  double t13336;
  double t13337;
  double t13342;
  double t13378;
  double t13408;
  double t13409;
  double t13416;
  double t13522;
  double t13526;
  double t13527;
  double t13129;
  double t13566;
  double t12551;
  double t13572;
  double t13573;
  double t13574;
  double t13625;
  double t13694;
  double t13714;
  double t13715;
  double t13716;
  double t13724;
  double t13726;
  double t13727;
  double t13728;
  double t13113;
  double t13114;
  double t13132;
  double t13137;
  double t12288;
  double t12294;
  double t12664;
  double t12829;
  double t13437;
  double t13505;
  double t13912;
  double t13925;
  double t13932;
  double t13963;
  double t13973;
  double t13974;
  double t13702;
  double t13713;
  double t14092;
  double t14093;
  double t14095;
  double t14097;
  double t14098;
  double t14104;
  double t14138;
  double t14139;
  double t14140;
  double t14130;
  double t14132;
  double t14136;
  double t14312;
  double t14323;
  double t14334;
  double t14257;
  double t14259;
  double t14276;
  double t14379;
  double t14381;
  double t14382;
  double t14401;
  double t14402;
  double t14416;
  double t14420;
  double t14422;
  double t14426;
  double t15450;
  double t15599;
  double t16069;
  double t16610;
  double t17025;
  double t17026;
  double t17566;
  double t17571;
  double t17598;
  double t17618;
  double t17621;
  double t17622;
  double t17623;
  double t17626;
  double t17657;
  double t17668;
  double t17684;
  double t17836;
  double t17838;
  double t17839;
  double t17842;
  double t17843;
  double t17849;
  double t17853;
  double t17854;
  double t17855;
  double t18139;
  double t18143;
  double t18156;
  double t18181;
  double t18185;
  double t18191;
  double t18217;
  double t18220;
  double t18279;
  double t18481;
  double t18489;
  double t18507;
  double t18522;
  double t18523;
  double t18528;
  double t18534;
  double t18535;
  double t18537;
  double t18596;
  double t18597;
  double t18599;
  double t18602;
  double t18603;
  double t18604;
  double t18614;
  double t18615;
  double t18621;
  double t18655;
  double t18656;
  double t18657;
  double t18674;
  double t18675;
  double t18677;
  double t18686;
  double t18694;
  double t18695;
  double t18697;
  double t18698;
  double t18699;
  double t18729;
  double t18754;
  double t18765;
  double t18800;
  double t18812;
  double t18838;
  double t19185;
  double t19193;
  double t19201;
  double t19149;
  double t19164;
  double t19167;
  double t19242;
  double t19243;
  double t19245;
  double t19268;
  double t19269;
  double t19271;
  double t19259;
  double t19264;
  double t19265;
  double t19298;
  double t19303;
  double t19304;
  double t19329;
  double t19330;
  double t19331;
  double t19342;
  double t19343;
  double t19344;
  double t19490;
  double t19495;
  double t19496;
  double t19498;
  double t19499;
  double t19500;
  double t19519;
  double t19520;
  double t19521;
  t12298 = Cos(var1[5]);
  t12464 = Sin(var1[4]);
  t13119 = Sin(var1[5]);
  t11205 = Cos(var1[4]);
  t11241 = Sin(var1[12]);
  t13008 = Cos(var1[12]);
  t13295 = Sin(var1[13]);
  t12283 = Cos(var1[13]);
  t13335 = t13008*t11205;
  t13336 = -1.*t11241*t12464*t13119;
  t13337 = t13335 + t13336;
  t13342 = Sin(var1[14]);
  t13378 = t12298*t13295*t12464;
  t13408 = t12283*t13337;
  t13409 = t13378 + t13408;
  t13416 = Cos(var1[14]);
  t13522 = -1.*t12283*t12298*t12464;
  t13526 = t13295*t13337;
  t13527 = t13522 + t13526;
  t13129 = Cos(var1[6]);
  t13566 = Sin(var1[6]);
  t12551 = Cos(var1[7]);
  t13572 = t11205*t13129;
  t13573 = -1.*t12464*t13119*t13566;
  t13574 = t13572 + t13573;
  t13625 = Sin(var1[7]);
  t13694 = Cos(var1[8]);
  t13714 = -1.*t12298*t12551*t12464;
  t13715 = t13574*t13625;
  t13716 = t13714 + t13715;
  t13724 = t12551*t13574;
  t13726 = t12298*t12464*t13625;
  t13727 = t13724 + t13726;
  t13728 = Sin(var1[8]);
  t13113 = -1.*t13008;
  t13114 = 1. + t13113;
  t13132 = -1.*t13129;
  t13137 = 1. + t13132;
  t12288 = -1.*t12283;
  t12294 = 1. + t12288;
  t12664 = -1.*t12551;
  t12829 = 1. + t12664;
  t13437 = -1.*t13416;
  t13505 = 1. + t13437;
  t13912 = t11205*t12298*t11241*t13295;
  t13925 = -1.*t12283*t11205*t13119;
  t13932 = t13912 + t13925;
  t13963 = t12283*t11205*t12298*t11241;
  t13973 = t11205*t13295*t13119;
  t13974 = t13963 + t13973;
  t13702 = -1.*t13694;
  t13713 = 1. + t13702;
  t14092 = -1.*t11205*t12551*t13119;
  t14093 = t11205*t12298*t13566*t13625;
  t14095 = t14092 + t14093;
  t14097 = t11205*t12298*t12551*t13566;
  t14098 = t11205*t13119*t13625;
  t14104 = t14097 + t14098;
  t14138 = t11205*t13129*t13119;
  t14139 = -1.*t12464*t13566;
  t14140 = t14138 + t14139;
  t14130 = t13129*t12464;
  t14132 = t11205*t13119*t13566;
  t14136 = t14130 + t14132;
  t14312 = -1.*t11205*t12298*t12551;
  t14323 = -1.*t14136*t13625;
  t14334 = t14312 + t14323;
  t14257 = t12551*t14136;
  t14259 = -1.*t11205*t12298*t13625;
  t14276 = t14257 + t14259;
  t14379 = t11205*t12298*t12551;
  t14381 = t14136*t13625;
  t14382 = t14379 + t14381;
  t14401 = -1.*t11241*t12464;
  t14402 = t13008*t11205*t13119;
  t14416 = t14401 + t14402;
  t14420 = t13008*t12464;
  t14422 = t11205*t11241*t13119;
  t14426 = t14420 + t14422;
  t15450 = -1.*t11205*t12298*t13295;
  t15599 = t12283*t14426;
  t16069 = t15450 + t15599;
  t16610 = -1.*t12283*t11205*t12298;
  t17025 = -1.*t13295*t14426;
  t17026 = t16610 + t17025;
  t17566 = t12283*t11205*t12298;
  t17571 = t13295*t14426;
  t17598 = t17566 + t17571;
  t17618 = Cos(var1[3]);
  t17621 = t17618*t12298*t12464;
  t17622 = Sin(var1[3]);
  t17623 = -1.*t17622*t13119;
  t17626 = t17621 + t17623;
  t17657 = -1.*t12298*t17622;
  t17668 = -1.*t17618*t12464*t13119;
  t17684 = t17657 + t17668;
  t17836 = -1.*t13008*t17618*t11205;
  t17838 = -1.*t11241*t17684;
  t17839 = t17836 + t17838;
  t17842 = -1.*t13295*t17626;
  t17843 = t12283*t17839;
  t17849 = t17842 + t17843;
  t17853 = t12283*t17626;
  t17854 = t13295*t17839;
  t17855 = t17853 + t17854;
  t18139 = -1.*t17618*t11205*t13129;
  t18143 = -1.*t17684*t13566;
  t18156 = t18139 + t18143;
  t18181 = t12551*t17626;
  t18185 = t18156*t13625;
  t18191 = t18181 + t18185;
  t18217 = t12551*t18156;
  t18220 = -1.*t17626*t13625;
  t18279 = t18217 + t18220;
  t18481 = t13008*t17622*t12464;
  t18489 = t11205*t11241*t17622*t13119;
  t18507 = t18481 + t18489;
  t18522 = -1.*t11205*t12298*t13295*t17622;
  t18523 = t12283*t18507;
  t18528 = t18522 + t18523;
  t18534 = t12283*t11205*t12298*t17622;
  t18535 = t13295*t18507;
  t18537 = t18534 + t18535;
  t18596 = t13129*t17622*t12464;
  t18597 = t11205*t17622*t13119*t13566;
  t18599 = t18596 + t18597;
  t18602 = t11205*t12298*t12551*t17622;
  t18603 = t18599*t13625;
  t18604 = t18602 + t18603;
  t18614 = t12551*t18599;
  t18615 = -1.*t11205*t12298*t17622*t13625;
  t18621 = t18614 + t18615;
  t18655 = -1.*t12298*t17622*t12464;
  t18656 = -1.*t17618*t13119;
  t18657 = t18655 + t18656;
  t18674 = t17618*t12298;
  t18675 = -1.*t17622*t12464*t13119;
  t18677 = t18674 + t18675;
  t18686 = -1.*t11241*t13295*t18657;
  t18694 = t12283*t18677;
  t18695 = t18686 + t18694;
  t18697 = -1.*t12283*t11241*t18657;
  t18698 = -1.*t13295*t18677;
  t18699 = t18697 + t18698;
  t18729 = t12551*t18677;
  t18754 = -1.*t18657*t13566*t13625;
  t18765 = t18729 + t18754;
  t18800 = -1.*t12551*t18657*t13566;
  t18812 = -1.*t18677*t13625;
  t18838 = t18800 + t18812;
  t19185 = -1.*t13129*t18677;
  t19193 = t11205*t17622*t13566;
  t19201 = t19185 + t19193;
  t19149 = -1.*t11205*t13129*t17622;
  t19164 = -1.*t18677*t13566;
  t19167 = t19149 + t19164;
  t19242 = t12298*t17622*t12464;
  t19243 = t17618*t13119;
  t19245 = t19242 + t19243;
  t19268 = -1.*t12551*t19245;
  t19269 = -1.*t19167*t13625;
  t19271 = t19268 + t19269;
  t19259 = t12551*t19167;
  t19264 = -1.*t19245*t13625;
  t19265 = t19259 + t19264;
  t19298 = t12551*t19245;
  t19303 = t19167*t13625;
  t19304 = t19298 + t19303;
  t19329 = t11205*t11241*t17622;
  t19330 = -1.*t13008*t18677;
  t19331 = t19329 + t19330;
  t19342 = -1.*t13008*t11205*t17622;
  t19343 = -1.*t11241*t18677;
  t19344 = t19342 + t19343;
  t19490 = -1.*t13295*t19245;
  t19495 = t12283*t19344;
  t19496 = t19490 + t19495;
  t19498 = -1.*t12283*t19245;
  t19499 = -1.*t13295*t19344;
  t19500 = t19498 + t19499;
  t19519 = t12283*t19245;
  t19520 = t13295*t19344;
  t19521 = t19519 + t19520;
  p_output1[0]=-0.1575*t11205*t11241 + 0.325*t12294*t12298*t12464 - 0.325*t12298*t12464*t12829 + 0.1575*t12464*t13114*t13119 + 0.2255*(t11205*t11241 + t12464*t13008*t13119) + 0.1575*t12464*t13119*t13137 + 0.325*t13295*t13337 - 0.075*t13342*t13409 - 0.075*t13505*t13527 + 0.0641*(t13409*t13416 + t13342*t13527) - 0.355*(-1.*t13342*t13409 + t13416*t13527) - 0.1575*t11205*t13566 + 0.2255*(t12464*t13119*t13129 + t11205*t13566) - 0.325*t13574*t13625 + 0.075*t13713*t13716 + 0.075*t13727*t13728 - 0.0641*(t13694*t13727 + t13716*t13728) + 0.355*(t13694*t13716 - 1.*t13727*t13728);
  p_output1[1]=-0.2255*t11205*t12298*t13008 - 0.1575*t11205*t12298*t13114 + 0.325*t11205*t12294*t13119 - 0.325*t11205*t12829*t13119 - 0.2255*t11205*t12298*t13129 - 0.1575*t11205*t12298*t13137 + 0.325*t11205*t11241*t12298*t13295 - 0.325*t11205*t12298*t13566*t13625 - 0.075*t13505*t13932 - 0.075*t13342*t13974 - 0.355*(t13416*t13932 - 1.*t13342*t13974) + 0.0641*(t13342*t13932 + t13416*t13974) + 0.075*t13713*t14095 + 0.075*t13728*t14104 - 0.0641*(t13728*t14095 + t13694*t14104) + 0.355*(t13694*t14095 - 1.*t13728*t14104);
  p_output1[2]=-0.1575*t12464*t13129 - 0.1575*t11205*t13119*t13566 + 0.2255*t14136 - 0.325*t13625*t14140 + 0.075*t13625*t13713*t14140 + 0.075*t12551*t13728*t14140 + 0.355*(t13625*t13694*t14140 - 1.*t12551*t13728*t14140) - 0.0641*(t12551*t13694*t14140 + t13625*t13728*t14140);
  p_output1[3]=0.325*t11205*t12298*t13625 - 0.325*t12551*t14136 + 0.075*t13713*t14276 + 0.075*t13728*t14334 - 0.0641*(t13728*t14276 + t13694*t14334) + 0.355*(t13694*t14276 - 1.*t13728*t14334);
  p_output1[4]=0.075*t13694*t14276 + 0.075*t13728*t14382 - 0.0641*(-1.*t13728*t14276 + t13694*t14382) + 0.355*(-1.*t13694*t14276 - 1.*t13728*t14382);
  p_output1[5]=-0.1575*t12464*t13008 - 0.1575*t11205*t11241*t13119 + 0.325*t13295*t14416 - 0.075*t12283*t13342*t14416 - 0.075*t13295*t13505*t14416 + 0.0641*(t13295*t13342*t14416 + t12283*t13416*t14416) - 0.355*(-1.*t12283*t13342*t14416 + t13295*t13416*t14416) + 0.2255*t14426;
  p_output1[6]=-0.325*t11205*t12298*t13295 + 0.325*t12283*t14426 - 0.075*t13505*t16069 - 0.075*t13342*t17026 - 0.355*(t13416*t16069 - 1.*t13342*t17026) + 0.0641*(t13342*t16069 + t13416*t17026);
  p_output1[7]=-0.075*t13416*t16069 - 0.075*t13342*t17598 - 0.355*(-1.*t13416*t16069 - 1.*t13342*t17598) + 0.0641*(-1.*t13342*t16069 + t13416*t17598);
  p_output1[8]=0.1575*t11205*t11241*t17618 + 0.1575*t11205*t13566*t17618 - 0.325*t12294*t17626 + 0.325*t12829*t17626 + 0.1575*t13114*t17684 + 0.1575*t13137*t17684 + 0.2255*(-1.*t11205*t11241*t17618 + t13008*t17684) + 0.2255*(-1.*t11205*t13566*t17618 + t13129*t17684) + 0.325*t13295*t17839 - 0.075*t13342*t17849 - 0.075*t13505*t17855 + 0.0641*(t13416*t17849 + t13342*t17855) - 0.355*(-1.*t13342*t17849 + t13416*t17855) - 0.325*t13625*t18156 + 0.075*t13713*t18191 + 0.075*t13728*t18279 - 0.0641*(t13728*t18191 + t13694*t18279) + 0.355*(t13694*t18191 - 1.*t13728*t18279);
  p_output1[9]=-0.325*t11205*t12294*t12298*t17622 - 0.1575*t11241*t12464*t17622 + 0.325*t11205*t12298*t12829*t17622 - 0.1575*t11205*t13114*t13119*t17622 - 0.1575*t11205*t13119*t13137*t17622 - 0.1575*t12464*t13566*t17622 + 0.2255*(t11241*t12464*t17622 - 1.*t11205*t13008*t13119*t17622) + 0.2255*(-1.*t11205*t13119*t13129*t17622 + t12464*t13566*t17622) + 0.325*t13295*t18507 - 0.075*t13342*t18528 - 0.075*t13505*t18537 + 0.0641*(t13416*t18528 + t13342*t18537) - 0.355*(-1.*t13342*t18528 + t13416*t18537) - 0.325*t13625*t18599 + 0.075*t13713*t18604 + 0.075*t13728*t18621 - 0.0641*(t13728*t18604 + t13694*t18621) + 0.355*(t13694*t18604 - 1.*t13728*t18621);
  p_output1[10]=0.2255*t13008*t18657 + 0.1575*t13114*t18657 + 0.2255*t13129*t18657 + 0.1575*t13137*t18657 - 0.325*t11241*t13295*t18657 + 0.325*t13566*t13625*t18657 - 0.325*t12294*t18677 + 0.325*t12829*t18677 - 0.075*t13505*t18695 - 0.075*t13342*t18699 - 0.355*(t13416*t18695 - 1.*t13342*t18699) + 0.0641*(t13342*t18695 + t13416*t18699) + 0.075*t13713*t18765 + 0.075*t13728*t18838 - 0.0641*(t13728*t18765 + t13694*t18838) + 0.355*(t13694*t18765 - 1.*t13728*t18838);
  p_output1[11]=0.1575*t11205*t13129*t17622 + 0.1575*t13566*t18677 + 0.2255*t19167 - 0.325*t13625*t19201 + 0.075*t13625*t13713*t19201 + 0.075*t12551*t13728*t19201 + 0.355*(t13625*t13694*t19201 - 1.*t12551*t13728*t19201) - 0.0641*(t12551*t13694*t19201 + t13625*t13728*t19201);
  p_output1[12]=-0.325*t12551*t19167 + 0.325*t13625*t19245 + 0.075*t13713*t19265 + 0.075*t13728*t19271 - 0.0641*(t13728*t19265 + t13694*t19271) + 0.355*(t13694*t19265 - 1.*t13728*t19271);
  p_output1[13]=0.075*t13694*t19265 + 0.075*t13728*t19304 - 0.0641*(-1.*t13728*t19265 + t13694*t19304) + 0.355*(-1.*t13694*t19265 - 1.*t13728*t19304);
  p_output1[14]=0.1575*t11205*t13008*t17622 + 0.1575*t11241*t18677 + 0.325*t13295*t19331 - 0.075*t12283*t13342*t19331 - 0.075*t13295*t13505*t19331 + 0.0641*(t13295*t13342*t19331 + t12283*t13416*t19331) - 0.355*(-1.*t12283*t13342*t19331 + t13295*t13416*t19331) + 0.2255*t19344;
  p_output1[15]=-0.325*t13295*t19245 + 0.325*t12283*t19344 - 0.075*t13505*t19496 - 0.075*t13342*t19500 - 0.355*(t13416*t19496 - 1.*t13342*t19500) + 0.0641*(t13342*t19496 + t13416*t19500);
  p_output1[16]=-0.075*t13416*t19496 - 0.075*t13342*t19521 - 0.355*(-1.*t13416*t19496 - 1.*t13342*t19521) + 0.0641*(-1.*t13342*t19496 + t13416*t19521);
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

#include "J_step_distance_front_DiagonalStance.hh"

namespace DiagonalStance
{

void J_step_distance_front_DiagonalStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
