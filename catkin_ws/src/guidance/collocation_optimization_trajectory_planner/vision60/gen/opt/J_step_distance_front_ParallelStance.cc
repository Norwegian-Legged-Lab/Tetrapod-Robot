/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:48:29 GMT+02:00
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
  double t26830;
  double t26831;
  double t26969;
  double t26696;
  double t26747;
  double t26955;
  double t27054;
  double t26815;
  double t27091;
  double t27092;
  double t27093;
  double t27101;
  double t27112;
  double t27113;
  double t27114;
  double t27132;
  double t27214;
  double t27224;
  double t27225;
  double t26977;
  double t27356;
  double t26868;
  double t27366;
  double t27367;
  double t27369;
  double t27373;
  double t27377;
  double t27405;
  double t27422;
  double t27439;
  double t27443;
  double t27445;
  double t27449;
  double t27450;
  double t26961;
  double t26968;
  double t26983;
  double t26988;
  double t26827;
  double t26828;
  double t26875;
  double t26926;
  double t27158;
  double t27211;
  double t27600;
  double t27601;
  double t27607;
  double t27614;
  double t27618;
  double t27659;
  double t27381;
  double t27393;
  double t27765;
  double t27923;
  double t28820;
  double t28828;
  double t28832;
  double t28836;
  double t29680;
  double t29764;
  double t29927;
  double t29489;
  double t29555;
  double t29571;
  double t30293;
  double t30295;
  double t30307;
  double t30288;
  double t30289;
  double t30290;
  double t30601;
  double t30627;
  double t30629;
  double t30997;
  double t31001;
  double t31057;
  double t31108;
  double t31118;
  double t31120;
  double t31563;
  double t31567;
  double t31581;
  double t31632;
  double t31650;
  double t31669;
  double t32170;
  double t32179;
  double t32187;
  double t32409;
  double t32425;
  double t32436;
  double t32437;
  double t32438;
  double t32457;
  double t32467;
  double t32468;
  double t32479;
  double t32484;
  double t32488;
  double t32490;
  double t32491;
  double t32494;
  double t32496;
  double t32497;
  double t32498;
  double t32527;
  double t32530;
  double t32534;
  double t32571;
  double t32577;
  double t32579;
  double t32615;
  double t32617;
  double t32622;
  double t32941;
  double t32942;
  double t32944;
  double t32952;
  double t32954;
  double t32955;
  double t32957;
  double t32958;
  double t32959;
  double t32982;
  double t32983;
  double t32986;
  double t32991;
  double t32992;
  double t32993;
  double t32995;
  double t32996;
  double t32997;
  double t33166;
  double t33167;
  double t33168;
  double t33178;
  double t33179;
  double t33180;
  double t33183;
  double t33184;
  double t33185;
  double t33190;
  double t33191;
  double t33193;
  double t33224;
  double t33225;
  double t33226;
  double t33232;
  double t33233;
  double t33234;
  double t33259;
  double t33260;
  double t33261;
  double t33254;
  double t33255;
  double t33256;
  double t33285;
  double t33286;
  double t33289;
  double t33295;
  double t33298;
  double t33299;
  double t33291;
  double t33292;
  double t33293;
  double t33334;
  double t33375;
  double t33399;
  double t33498;
  double t33501;
  double t33506;
  double t33517;
  double t33519;
  double t33520;
  double t33548;
  double t33549;
  double t33550;
  double t33562;
  double t33565;
  double t33566;
  double t33600;
  double t33601;
  double t33602;
  t26830 = Cos(var1[5]);
  t26831 = Sin(var1[4]);
  t26969 = Sin(var1[5]);
  t26696 = Cos(var1[4]);
  t26747 = Sin(var1[12]);
  t26955 = Cos(var1[12]);
  t27054 = Sin(var1[13]);
  t26815 = Cos(var1[13]);
  t27091 = t26955*t26696;
  t27092 = -1.*t26747*t26831*t26969;
  t27093 = t27091 + t27092;
  t27101 = Sin(var1[14]);
  t27112 = t26830*t27054*t26831;
  t27113 = t26815*t27093;
  t27114 = t27112 + t27113;
  t27132 = Cos(var1[14]);
  t27214 = -1.*t26815*t26830*t26831;
  t27224 = t27054*t27093;
  t27225 = t27214 + t27224;
  t26977 = Cos(var1[6]);
  t27356 = Sin(var1[6]);
  t26868 = Cos(var1[7]);
  t27366 = t26696*t26977;
  t27367 = -1.*t26831*t26969*t27356;
  t27369 = t27366 + t27367;
  t27373 = Sin(var1[7]);
  t27377 = Cos(var1[8]);
  t27405 = -1.*t26830*t26868*t26831;
  t27422 = t27369*t27373;
  t27439 = t27405 + t27422;
  t27443 = t26868*t27369;
  t27445 = t26830*t26831*t27373;
  t27449 = t27443 + t27445;
  t27450 = Sin(var1[8]);
  t26961 = -1.*t26955;
  t26968 = 1. + t26961;
  t26983 = -1.*t26977;
  t26988 = 1. + t26983;
  t26827 = -1.*t26815;
  t26828 = 1. + t26827;
  t26875 = -1.*t26868;
  t26926 = 1. + t26875;
  t27158 = -1.*t27132;
  t27211 = 1. + t27158;
  t27600 = t26696*t26830*t26747*t27054;
  t27601 = -1.*t26815*t26696*t26969;
  t27607 = t27600 + t27601;
  t27614 = t26815*t26696*t26830*t26747;
  t27618 = t26696*t27054*t26969;
  t27659 = t27614 + t27618;
  t27381 = -1.*t27377;
  t27393 = 1. + t27381;
  t27765 = -1.*t26696*t26868*t26969;
  t27923 = t26696*t26830*t27356*t27373;
  t28820 = t27765 + t27923;
  t28828 = t26696*t26830*t26868*t27356;
  t28832 = t26696*t26969*t27373;
  t28836 = t28828 + t28832;
  t29680 = t26696*t26977*t26969;
  t29764 = -1.*t26831*t27356;
  t29927 = t29680 + t29764;
  t29489 = t26977*t26831;
  t29555 = t26696*t26969*t27356;
  t29571 = t29489 + t29555;
  t30293 = -1.*t26696*t26830*t26868;
  t30295 = -1.*t29571*t27373;
  t30307 = t30293 + t30295;
  t30288 = t26868*t29571;
  t30289 = -1.*t26696*t26830*t27373;
  t30290 = t30288 + t30289;
  t30601 = t26696*t26830*t26868;
  t30627 = t29571*t27373;
  t30629 = t30601 + t30627;
  t30997 = -1.*t26747*t26831;
  t31001 = t26955*t26696*t26969;
  t31057 = t30997 + t31001;
  t31108 = t26955*t26831;
  t31118 = t26696*t26747*t26969;
  t31120 = t31108 + t31118;
  t31563 = -1.*t26696*t26830*t27054;
  t31567 = t26815*t31120;
  t31581 = t31563 + t31567;
  t31632 = -1.*t26815*t26696*t26830;
  t31650 = -1.*t27054*t31120;
  t31669 = t31632 + t31650;
  t32170 = t26815*t26696*t26830;
  t32179 = t27054*t31120;
  t32187 = t32170 + t32179;
  t32409 = Cos(var1[3]);
  t32425 = t32409*t26830*t26831;
  t32436 = Sin(var1[3]);
  t32437 = -1.*t32436*t26969;
  t32438 = t32425 + t32437;
  t32457 = -1.*t26830*t32436;
  t32467 = -1.*t32409*t26831*t26969;
  t32468 = t32457 + t32467;
  t32479 = -1.*t26955*t32409*t26696;
  t32484 = -1.*t26747*t32468;
  t32488 = t32479 + t32484;
  t32490 = -1.*t27054*t32438;
  t32491 = t26815*t32488;
  t32494 = t32490 + t32491;
  t32496 = t26815*t32438;
  t32497 = t27054*t32488;
  t32498 = t32496 + t32497;
  t32527 = -1.*t32409*t26696*t26977;
  t32530 = -1.*t32468*t27356;
  t32534 = t32527 + t32530;
  t32571 = t26868*t32438;
  t32577 = t32534*t27373;
  t32579 = t32571 + t32577;
  t32615 = t26868*t32534;
  t32617 = -1.*t32438*t27373;
  t32622 = t32615 + t32617;
  t32941 = t26955*t32436*t26831;
  t32942 = t26696*t26747*t32436*t26969;
  t32944 = t32941 + t32942;
  t32952 = -1.*t26696*t26830*t27054*t32436;
  t32954 = t26815*t32944;
  t32955 = t32952 + t32954;
  t32957 = t26815*t26696*t26830*t32436;
  t32958 = t27054*t32944;
  t32959 = t32957 + t32958;
  t32982 = t26977*t32436*t26831;
  t32983 = t26696*t32436*t26969*t27356;
  t32986 = t32982 + t32983;
  t32991 = t26696*t26830*t26868*t32436;
  t32992 = t32986*t27373;
  t32993 = t32991 + t32992;
  t32995 = t26868*t32986;
  t32996 = -1.*t26696*t26830*t32436*t27373;
  t32997 = t32995 + t32996;
  t33166 = -1.*t26830*t32436*t26831;
  t33167 = -1.*t32409*t26969;
  t33168 = t33166 + t33167;
  t33178 = t32409*t26830;
  t33179 = -1.*t32436*t26831*t26969;
  t33180 = t33178 + t33179;
  t33183 = -1.*t26747*t27054*t33168;
  t33184 = t26815*t33180;
  t33185 = t33183 + t33184;
  t33190 = -1.*t26815*t26747*t33168;
  t33191 = -1.*t27054*t33180;
  t33193 = t33190 + t33191;
  t33224 = t26868*t33180;
  t33225 = -1.*t33168*t27356*t27373;
  t33226 = t33224 + t33225;
  t33232 = -1.*t26868*t33168*t27356;
  t33233 = -1.*t33180*t27373;
  t33234 = t33232 + t33233;
  t33259 = -1.*t26977*t33180;
  t33260 = t26696*t32436*t27356;
  t33261 = t33259 + t33260;
  t33254 = -1.*t26696*t26977*t32436;
  t33255 = -1.*t33180*t27356;
  t33256 = t33254 + t33255;
  t33285 = t26830*t32436*t26831;
  t33286 = t32409*t26969;
  t33289 = t33285 + t33286;
  t33295 = -1.*t26868*t33289;
  t33298 = -1.*t33256*t27373;
  t33299 = t33295 + t33298;
  t33291 = t26868*t33256;
  t33292 = -1.*t33289*t27373;
  t33293 = t33291 + t33292;
  t33334 = t26868*t33289;
  t33375 = t33256*t27373;
  t33399 = t33334 + t33375;
  t33498 = t26696*t26747*t32436;
  t33501 = -1.*t26955*t33180;
  t33506 = t33498 + t33501;
  t33517 = -1.*t26955*t26696*t32436;
  t33519 = -1.*t26747*t33180;
  t33520 = t33517 + t33519;
  t33548 = -1.*t27054*t33289;
  t33549 = t26815*t33520;
  t33550 = t33548 + t33549;
  t33562 = -1.*t26815*t33289;
  t33565 = -1.*t27054*t33520;
  t33566 = t33562 + t33565;
  t33600 = t26815*t33289;
  t33601 = t27054*t33520;
  t33602 = t33600 + t33601;
  p_output1[0]=-0.1575*t26696*t26747 + 0.325*t26828*t26830*t26831 - 0.325*t26830*t26831*t26926 + 0.1575*t26831*t26968*t26969 + 0.2255*(t26696*t26747 + t26831*t26955*t26969) + 0.1575*t26831*t26969*t26988 + 0.325*t27054*t27093 - 0.075*t27101*t27114 - 0.075*t27211*t27225 + 0.0641*(t27114*t27132 + t27101*t27225) - 0.355*(-1.*t27101*t27114 + t27132*t27225) - 0.1575*t26696*t27356 + 0.2255*(t26831*t26969*t26977 + t26696*t27356) - 0.325*t27369*t27373 + 0.075*t27393*t27439 + 0.075*t27449*t27450 - 0.0641*(t27377*t27449 + t27439*t27450) + 0.355*(t27377*t27439 - 1.*t27449*t27450);
  p_output1[1]=-0.2255*t26696*t26830*t26955 - 0.1575*t26696*t26830*t26968 + 0.325*t26696*t26828*t26969 - 0.325*t26696*t26926*t26969 - 0.2255*t26696*t26830*t26977 - 0.1575*t26696*t26830*t26988 + 0.325*t26696*t26747*t26830*t27054 - 0.325*t26696*t26830*t27356*t27373 - 0.075*t27211*t27607 - 0.075*t27101*t27659 - 0.355*(t27132*t27607 - 1.*t27101*t27659) + 0.0641*(t27101*t27607 + t27132*t27659) + 0.075*t27393*t28820 + 0.075*t27450*t28836 - 0.0641*(t27450*t28820 + t27377*t28836) + 0.355*(t27377*t28820 - 1.*t27450*t28836);
  p_output1[2]=-0.1575*t26831*t26977 - 0.1575*t26696*t26969*t27356 + 0.2255*t29571 - 0.325*t27373*t29927 + 0.075*t27373*t27393*t29927 + 0.075*t26868*t27450*t29927 + 0.355*(t27373*t27377*t29927 - 1.*t26868*t27450*t29927) - 0.0641*(t26868*t27377*t29927 + t27373*t27450*t29927);
  p_output1[3]=0.325*t26696*t26830*t27373 - 0.325*t26868*t29571 + 0.075*t27393*t30290 + 0.075*t27450*t30307 - 0.0641*(t27450*t30290 + t27377*t30307) + 0.355*(t27377*t30290 - 1.*t27450*t30307);
  p_output1[4]=0.075*t27377*t30290 + 0.075*t27450*t30629 - 0.0641*(-1.*t27450*t30290 + t27377*t30629) + 0.355*(-1.*t27377*t30290 - 1.*t27450*t30629);
  p_output1[5]=-0.1575*t26831*t26955 - 0.1575*t26696*t26747*t26969 + 0.325*t27054*t31057 - 0.075*t26815*t27101*t31057 - 0.075*t27054*t27211*t31057 + 0.0641*(t27054*t27101*t31057 + t26815*t27132*t31057) - 0.355*(-1.*t26815*t27101*t31057 + t27054*t27132*t31057) + 0.2255*t31120;
  p_output1[6]=-0.325*t26696*t26830*t27054 + 0.325*t26815*t31120 - 0.075*t27211*t31581 - 0.075*t27101*t31669 - 0.355*(t27132*t31581 - 1.*t27101*t31669) + 0.0641*(t27101*t31581 + t27132*t31669);
  p_output1[7]=-0.075*t27132*t31581 - 0.075*t27101*t32187 - 0.355*(-1.*t27132*t31581 - 1.*t27101*t32187) + 0.0641*(-1.*t27101*t31581 + t27132*t32187);
  p_output1[8]=0.1575*t26696*t26747*t32409 + 0.1575*t26696*t27356*t32409 - 0.325*t26828*t32438 + 0.325*t26926*t32438 + 0.1575*t26968*t32468 + 0.1575*t26988*t32468 + 0.2255*(-1.*t26696*t26747*t32409 + t26955*t32468) + 0.2255*(-1.*t26696*t27356*t32409 + t26977*t32468) + 0.325*t27054*t32488 - 0.075*t27101*t32494 - 0.075*t27211*t32498 + 0.0641*(t27132*t32494 + t27101*t32498) - 0.355*(-1.*t27101*t32494 + t27132*t32498) - 0.325*t27373*t32534 + 0.075*t27393*t32579 + 0.075*t27450*t32622 - 0.0641*(t27450*t32579 + t27377*t32622) + 0.355*(t27377*t32579 - 1.*t27450*t32622);
  p_output1[9]=-0.325*t26696*t26828*t26830*t32436 - 0.1575*t26747*t26831*t32436 + 0.325*t26696*t26830*t26926*t32436 - 0.1575*t26696*t26968*t26969*t32436 - 0.1575*t26696*t26969*t26988*t32436 - 0.1575*t26831*t27356*t32436 + 0.2255*(t26747*t26831*t32436 - 1.*t26696*t26955*t26969*t32436) + 0.2255*(-1.*t26696*t26969*t26977*t32436 + t26831*t27356*t32436) + 0.325*t27054*t32944 - 0.075*t27101*t32955 - 0.075*t27211*t32959 + 0.0641*(t27132*t32955 + t27101*t32959) - 0.355*(-1.*t27101*t32955 + t27132*t32959) - 0.325*t27373*t32986 + 0.075*t27393*t32993 + 0.075*t27450*t32997 - 0.0641*(t27450*t32993 + t27377*t32997) + 0.355*(t27377*t32993 - 1.*t27450*t32997);
  p_output1[10]=0.2255*t26955*t33168 + 0.1575*t26968*t33168 + 0.2255*t26977*t33168 + 0.1575*t26988*t33168 - 0.325*t26747*t27054*t33168 + 0.325*t27356*t27373*t33168 - 0.325*t26828*t33180 + 0.325*t26926*t33180 - 0.075*t27211*t33185 - 0.075*t27101*t33193 - 0.355*(t27132*t33185 - 1.*t27101*t33193) + 0.0641*(t27101*t33185 + t27132*t33193) + 0.075*t27393*t33226 + 0.075*t27450*t33234 - 0.0641*(t27450*t33226 + t27377*t33234) + 0.355*(t27377*t33226 - 1.*t27450*t33234);
  p_output1[11]=0.1575*t26696*t26977*t32436 + 0.1575*t27356*t33180 + 0.2255*t33256 - 0.325*t27373*t33261 + 0.075*t27373*t27393*t33261 + 0.075*t26868*t27450*t33261 + 0.355*(t27373*t27377*t33261 - 1.*t26868*t27450*t33261) - 0.0641*(t26868*t27377*t33261 + t27373*t27450*t33261);
  p_output1[12]=-0.325*t26868*t33256 + 0.325*t27373*t33289 + 0.075*t27393*t33293 + 0.075*t27450*t33299 - 0.0641*(t27450*t33293 + t27377*t33299) + 0.355*(t27377*t33293 - 1.*t27450*t33299);
  p_output1[13]=0.075*t27377*t33293 + 0.075*t27450*t33399 - 0.0641*(-1.*t27450*t33293 + t27377*t33399) + 0.355*(-1.*t27377*t33293 - 1.*t27450*t33399);
  p_output1[14]=0.1575*t26696*t26955*t32436 + 0.1575*t26747*t33180 + 0.325*t27054*t33506 - 0.075*t26815*t27101*t33506 - 0.075*t27054*t27211*t33506 + 0.0641*(t27054*t27101*t33506 + t26815*t27132*t33506) - 0.355*(-1.*t26815*t27101*t33506 + t27054*t27132*t33506) + 0.2255*t33520;
  p_output1[15]=-0.325*t27054*t33289 + 0.325*t26815*t33520 - 0.075*t27211*t33550 - 0.075*t27101*t33566 - 0.355*(t27132*t33550 - 1.*t27101*t33566) + 0.0641*(t27101*t33550 + t27132*t33566);
  p_output1[16]=-0.075*t27132*t33550 - 0.075*t27101*t33602 - 0.355*(-1.*t27132*t33550 - 1.*t27101*t33602) + 0.0641*(-1.*t27101*t33550 + t27132*t33602);
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
