/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:48:32 GMT+02:00
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
  double t24129;
  double t26500;
  double t26537;
  double t27376;
  double t24616;
  double t27131;
  double t25055;
  double t27456;
  double t27566;
  double t26411;
  double t27567;
  double t27581;
  double t27590;
  double t27664;
  double t26817;
  double t27670;
  double t27721;
  double t27728;
  double t28837;
  double t28851;
  double t28864;
  double t29041;
  double t29165;
  double t29221;
  double t29286;
  double t29340;
  double t29682;
  double t29710;
  double t29909;
  double t29910;
  double t29915;
  double t29934;
  double t29935;
  double t29936;
  double t27262;
  double t27359;
  double t27460;
  double t27466;
  double t26480;
  double t26499;
  double t26838;
  double t26939;
  double t29177;
  double t29207;
  double t29916;
  double t29918;
  double t30280;
  double t30283;
  double t30284;
  double t30365;
  double t30377;
  double t30405;
  double t30291;
  double t30310;
  double t30328;
  double t30456;
  double t30458;
  double t30460;
  double t30531;
  double t30545;
  double t30557;
  double t30677;
  double t30688;
  double t30707;
  double t30794;
  double t30800;
  double t30802;
  double t30818;
  double t30819;
  double t30831;
  double t31022;
  double t31048;
  double t31050;
  double t31121;
  double t31126;
  double t31127;
  double t31162;
  double t31164;
  double t31168;
  double t31237;
  double t31267;
  double t31297;
  double t31335;
  double t31340;
  double t31364;
  double t31464;
  double t31466;
  double t31471;
  double t31539;
  double t31548;
  double t31551;
  double t31553;
  double t31554;
  double t31560;
  double t31562;
  double t31564;
  double t31620;
  double t31621;
  double t31622;
  double t31625;
  double t31626;
  double t31627;
  double t31631;
  double t31652;
  double t31661;
  double t31664;
  double t31666;
  double t31675;
  double t31678;
  double t31679;
  double t31681;
  double t31683;
  double t31684;
  double t31685;
  double t31849;
  double t31853;
  double t31854;
  double t31859;
  double t31860;
  double t31861;
  double t31864;
  double t31880;
  double t31889;
  double t31907;
  double t31909;
  double t31916;
  double t31943;
  double t31975;
  double t31976;
  double t31978;
  double t31984;
  double t31998;
  double t32212;
  double t32214;
  double t32215;
  double t32247;
  double t32248;
  double t32251;
  double t32256;
  double t32257;
  double t32258;
  double t32268;
  double t32269;
  double t32270;
  double t32261;
  double t32262;
  double t32265;
  double t32274;
  double t32276;
  double t32277;
  double t32422;
  double t32444;
  double t32448;
  double t32470;
  double t32471;
  double t32473;
  double t32503;
  double t32509;
  double t32510;
  double t32514;
  double t32515;
  double t32517;
  double t32519;
  double t32520;
  double t32521;
  double t32674;
  double t32686;
  double t32707;
  double t32760;
  double t32762;
  double t32763;
  double t32768;
  double t32769;
  double t32770;
  double t32815;
  double t32820;
  double t32826;
  double t32840;
  double t32842;
  double t32843;
  double t32883;
  double t32884;
  double t32888;
  t24129 = Cos(var1[4]);
  t26500 = Cos(var1[5]);
  t26537 = Sin(var1[4]);
  t27376 = Sin(var1[5]);
  t24616 = Sin(var1[9]);
  t27131 = Cos(var1[9]);
  t25055 = Sin(var1[15]);
  t27456 = Cos(var1[15]);
  t27566 = Sin(var1[10]);
  t26411 = Cos(var1[10]);
  t27567 = t27131*t24129;
  t27581 = -1.*t24616*t26537*t27376;
  t27590 = t27567 + t27581;
  t27664 = Sin(var1[16]);
  t26817 = Cos(var1[16]);
  t27670 = t27456*t24129;
  t27721 = -1.*t25055*t26537*t27376;
  t27728 = t27670 + t27721;
  t28837 = Sin(var1[11]);
  t28851 = t26500*t27566*t26537;
  t28864 = t26411*t27590;
  t29041 = t28851 + t28864;
  t29165 = Cos(var1[11]);
  t29221 = -1.*t26411*t26500*t26537;
  t29286 = t27566*t27590;
  t29340 = t29221 + t29286;
  t29682 = Sin(var1[17]);
  t29710 = t26500*t27664*t26537;
  t29909 = t26817*t27728;
  t29910 = t29710 + t29909;
  t29915 = Cos(var1[17]);
  t29934 = -1.*t26817*t26500*t26537;
  t29935 = t27664*t27728;
  t29936 = t29934 + t29935;
  t27262 = -1.*t27131;
  t27359 = 1. + t27262;
  t27460 = -1.*t27456;
  t27466 = 1. + t27460;
  t26480 = -1.*t26411;
  t26499 = 1. + t26480;
  t26838 = -1.*t26817;
  t26939 = 1. + t26838;
  t29177 = -1.*t29165;
  t29207 = 1. + t29177;
  t29916 = -1.*t29915;
  t29918 = 1. + t29916;
  t30280 = t24129*t26500*t24616*t27566;
  t30283 = -1.*t26411*t24129*t27376;
  t30284 = t30280 + t30283;
  t30365 = t26411*t24129*t26500*t24616;
  t30377 = t24129*t27566*t27376;
  t30405 = t30365 + t30377;
  t30291 = t24129*t26500*t25055*t27664;
  t30310 = -1.*t26817*t24129*t27376;
  t30328 = t30291 + t30310;
  t30456 = t26817*t24129*t26500*t25055;
  t30458 = t24129*t27664*t27376;
  t30460 = t30456 + t30458;
  t30531 = -1.*t24616*t26537;
  t30545 = t27131*t24129*t27376;
  t30557 = t30531 + t30545;
  t30677 = t27131*t26537;
  t30688 = t24129*t24616*t27376;
  t30707 = t30677 + t30688;
  t30794 = -1.*t24129*t26500*t27566;
  t30800 = t26411*t30707;
  t30802 = t30794 + t30800;
  t30818 = -1.*t26411*t24129*t26500;
  t30819 = -1.*t27566*t30707;
  t30831 = t30818 + t30819;
  t31022 = t26411*t24129*t26500;
  t31048 = t27566*t30707;
  t31050 = t31022 + t31048;
  t31121 = -1.*t25055*t26537;
  t31126 = t27456*t24129*t27376;
  t31127 = t31121 + t31126;
  t31162 = t27456*t26537;
  t31164 = t24129*t25055*t27376;
  t31168 = t31162 + t31164;
  t31237 = -1.*t24129*t26500*t27664;
  t31267 = t26817*t31168;
  t31297 = t31237 + t31267;
  t31335 = -1.*t26817*t24129*t26500;
  t31340 = -1.*t27664*t31168;
  t31364 = t31335 + t31340;
  t31464 = t26817*t24129*t26500;
  t31466 = t27664*t31168;
  t31471 = t31464 + t31466;
  t31539 = Cos(var1[3]);
  t31548 = t31539*t26500*t26537;
  t31551 = Sin(var1[3]);
  t31553 = -1.*t31551*t27376;
  t31554 = t31548 + t31553;
  t31560 = -1.*t26500*t31551;
  t31562 = -1.*t31539*t26537*t27376;
  t31564 = t31560 + t31562;
  t31620 = -1.*t27131*t31539*t24129;
  t31621 = -1.*t24616*t31564;
  t31622 = t31620 + t31621;
  t31625 = -1.*t27456*t31539*t24129;
  t31626 = -1.*t25055*t31564;
  t31627 = t31625 + t31626;
  t31631 = -1.*t27566*t31554;
  t31652 = t26411*t31622;
  t31661 = t31631 + t31652;
  t31664 = t26411*t31554;
  t31666 = t27566*t31622;
  t31675 = t31664 + t31666;
  t31678 = -1.*t27664*t31554;
  t31679 = t26817*t31627;
  t31681 = t31678 + t31679;
  t31683 = t26817*t31554;
  t31684 = t27664*t31627;
  t31685 = t31683 + t31684;
  t31849 = t27131*t31551*t26537;
  t31853 = t24129*t24616*t31551*t27376;
  t31854 = t31849 + t31853;
  t31859 = t27456*t31551*t26537;
  t31860 = t24129*t25055*t31551*t27376;
  t31861 = t31859 + t31860;
  t31864 = -1.*t24129*t26500*t27566*t31551;
  t31880 = t26411*t31854;
  t31889 = t31864 + t31880;
  t31907 = t26411*t24129*t26500*t31551;
  t31909 = t27566*t31854;
  t31916 = t31907 + t31909;
  t31943 = -1.*t24129*t26500*t27664*t31551;
  t31975 = t26817*t31861;
  t31976 = t31943 + t31975;
  t31978 = t26817*t24129*t26500*t31551;
  t31984 = t27664*t31861;
  t31998 = t31978 + t31984;
  t32212 = -1.*t26500*t31551*t26537;
  t32214 = -1.*t31539*t27376;
  t32215 = t32212 + t32214;
  t32247 = t31539*t26500;
  t32248 = -1.*t31551*t26537*t27376;
  t32251 = t32247 + t32248;
  t32256 = -1.*t24616*t27566*t32215;
  t32257 = t26411*t32251;
  t32258 = t32256 + t32257;
  t32268 = -1.*t26411*t24616*t32215;
  t32269 = -1.*t27566*t32251;
  t32270 = t32268 + t32269;
  t32261 = -1.*t25055*t27664*t32215;
  t32262 = t26817*t32251;
  t32265 = t32261 + t32262;
  t32274 = -1.*t26817*t25055*t32215;
  t32276 = -1.*t27664*t32251;
  t32277 = t32274 + t32276;
  t32422 = t24129*t24616*t31551;
  t32444 = -1.*t27131*t32251;
  t32448 = t32422 + t32444;
  t32470 = -1.*t27131*t24129*t31551;
  t32471 = -1.*t24616*t32251;
  t32473 = t32470 + t32471;
  t32503 = t26500*t31551*t26537;
  t32509 = t31539*t27376;
  t32510 = t32503 + t32509;
  t32514 = -1.*t27566*t32510;
  t32515 = t26411*t32473;
  t32517 = t32514 + t32515;
  t32519 = -1.*t26411*t32510;
  t32520 = -1.*t27566*t32473;
  t32521 = t32519 + t32520;
  t32674 = t26411*t32510;
  t32686 = t27566*t32473;
  t32707 = t32674 + t32686;
  t32760 = t24129*t25055*t31551;
  t32762 = -1.*t27456*t32251;
  t32763 = t32760 + t32762;
  t32768 = -1.*t27456*t24129*t31551;
  t32769 = -1.*t25055*t32251;
  t32770 = t32768 + t32769;
  t32815 = -1.*t27664*t32510;
  t32820 = t26817*t32770;
  t32826 = t32815 + t32820;
  t32840 = -1.*t26817*t32510;
  t32842 = -1.*t27664*t32770;
  t32843 = t32840 + t32842;
  t32883 = t26817*t32510;
  t32884 = t27664*t32770;
  t32888 = t32883 + t32884;
  p_output1[0]=-0.1575*t24129*t24616 - 0.1575*t24129*t25055 + 0.325*t26499*t26500*t26537 - 0.325*t26500*t26537*t26939 + 0.1575*t26537*t27359*t27376 + 0.2255*(t24129*t24616 + t26537*t27131*t27376) + 0.2255*(t24129*t25055 + t26537*t27376*t27456) + 0.1575*t26537*t27376*t27466 + 0.325*t27566*t27590 - 0.325*t27664*t27728 - 0.575*t28837*t29041 - 0.575*t29207*t29340 - 0.0641*(t29041*t29165 + t28837*t29340) - 0.295*(-1.*t28837*t29041 + t29165*t29340) + 0.575*t29682*t29910 + 0.575*t29918*t29936 + 0.0641*(t29910*t29915 + t29682*t29936) + 0.295*(-1.*t29682*t29910 + t29915*t29936);
  p_output1[1]=-0.2255*t24129*t26500*t27131 - 0.1575*t24129*t26500*t27359 + 0.325*t24129*t26499*t27376 - 0.325*t24129*t26939*t27376 - 0.2255*t24129*t26500*t27456 - 0.1575*t24129*t26500*t27466 + 0.325*t24129*t24616*t26500*t27566 - 0.325*t24129*t25055*t26500*t27664 - 0.575*t29207*t30284 + 0.575*t29918*t30328 - 0.575*t28837*t30405 - 0.295*(t29165*t30284 - 1.*t28837*t30405) - 0.0641*(t28837*t30284 + t29165*t30405) + 0.575*t29682*t30460 + 0.295*(t29915*t30328 - 1.*t29682*t30460) + 0.0641*(t29682*t30328 + t29915*t30460);
  p_output1[2]=-0.1575*t26537*t27131 - 0.1575*t24129*t24616*t27376 + 0.325*t27566*t30557 - 0.575*t26411*t28837*t30557 - 0.575*t27566*t29207*t30557 - 0.0641*(t27566*t28837*t30557 + t26411*t29165*t30557) - 0.295*(-1.*t26411*t28837*t30557 + t27566*t29165*t30557) + 0.2255*t30707;
  p_output1[3]=-0.325*t24129*t26500*t27566 + 0.325*t26411*t30707 - 0.575*t29207*t30802 - 0.575*t28837*t30831 - 0.295*(t29165*t30802 - 1.*t28837*t30831) - 0.0641*(t28837*t30802 + t29165*t30831);
  p_output1[4]=-0.575*t29165*t30802 - 0.575*t28837*t31050 - 0.295*(-1.*t29165*t30802 - 1.*t28837*t31050) - 0.0641*(-1.*t28837*t30802 + t29165*t31050);
  p_output1[5]=-0.1575*t24129*t25055*t27376 - 0.1575*t26537*t27456 - 0.325*t27664*t31127 + 0.575*t26817*t29682*t31127 + 0.575*t27664*t29918*t31127 + 0.0641*(t27664*t29682*t31127 + t26817*t29915*t31127) + 0.295*(-1.*t26817*t29682*t31127 + t27664*t29915*t31127) + 0.2255*t31168;
  p_output1[6]=0.325*t24129*t26500*t27664 - 0.325*t26817*t31168 + 0.575*t29918*t31297 + 0.575*t29682*t31364 + 0.295*(t29915*t31297 - 1.*t29682*t31364) + 0.0641*(t29682*t31297 + t29915*t31364);
  p_output1[7]=0.575*t29915*t31297 + 0.575*t29682*t31471 + 0.295*(-1.*t29915*t31297 - 1.*t29682*t31471) + 0.0641*(-1.*t29682*t31297 + t29915*t31471);
  p_output1[8]=0.1575*t24129*t24616*t31539 + 0.1575*t24129*t25055*t31539 - 0.325*t26499*t31554 + 0.325*t26939*t31554 + 0.1575*t27359*t31564 + 0.1575*t27466*t31564 + 0.2255*(-1.*t24129*t24616*t31539 + t27131*t31564) + 0.2255*(-1.*t24129*t25055*t31539 + t27456*t31564) + 0.325*t27566*t31622 - 0.325*t27664*t31627 - 0.575*t28837*t31661 - 0.575*t29207*t31675 - 0.0641*(t29165*t31661 + t28837*t31675) - 0.295*(-1.*t28837*t31661 + t29165*t31675) + 0.575*t29682*t31681 + 0.575*t29918*t31685 + 0.0641*(t29915*t31681 + t29682*t31685) + 0.295*(-1.*t29682*t31681 + t29915*t31685);
  p_output1[9]=-0.325*t24129*t26499*t26500*t31551 - 0.1575*t24616*t26537*t31551 - 0.1575*t25055*t26537*t31551 + 0.325*t24129*t26500*t26939*t31551 - 0.1575*t24129*t27359*t27376*t31551 - 0.1575*t24129*t27376*t27466*t31551 + 0.2255*(t24616*t26537*t31551 - 1.*t24129*t27131*t27376*t31551) + 0.2255*(t25055*t26537*t31551 - 1.*t24129*t27376*t27456*t31551) + 0.325*t27566*t31854 - 0.325*t27664*t31861 - 0.575*t28837*t31889 - 0.575*t29207*t31916 - 0.0641*(t29165*t31889 + t28837*t31916) - 0.295*(-1.*t28837*t31889 + t29165*t31916) + 0.575*t29682*t31976 + 0.575*t29918*t31998 + 0.0641*(t29915*t31976 + t29682*t31998) + 0.295*(-1.*t29682*t31976 + t29915*t31998);
  p_output1[10]=0.2255*t27131*t32215 + 0.1575*t27359*t32215 + 0.2255*t27456*t32215 + 0.1575*t27466*t32215 - 0.325*t24616*t27566*t32215 + 0.325*t25055*t27664*t32215 - 0.325*t26499*t32251 + 0.325*t26939*t32251 - 0.575*t29207*t32258 + 0.575*t29918*t32265 - 0.575*t28837*t32270 - 0.295*(t29165*t32258 - 1.*t28837*t32270) - 0.0641*(t28837*t32258 + t29165*t32270) + 0.575*t29682*t32277 + 0.295*(t29915*t32265 - 1.*t29682*t32277) + 0.0641*(t29682*t32265 + t29915*t32277);
  p_output1[11]=0.1575*t24129*t27131*t31551 + 0.1575*t24616*t32251 + 0.325*t27566*t32448 - 0.575*t26411*t28837*t32448 - 0.575*t27566*t29207*t32448 - 0.0641*(t27566*t28837*t32448 + t26411*t29165*t32448) - 0.295*(-1.*t26411*t28837*t32448 + t27566*t29165*t32448) + 0.2255*t32473;
  p_output1[12]=0.325*t26411*t32473 - 0.325*t27566*t32510 - 0.575*t29207*t32517 - 0.575*t28837*t32521 - 0.295*(t29165*t32517 - 1.*t28837*t32521) - 0.0641*(t28837*t32517 + t29165*t32521);
  p_output1[13]=-0.575*t29165*t32517 - 0.575*t28837*t32707 - 0.295*(-1.*t29165*t32517 - 1.*t28837*t32707) - 0.0641*(-1.*t28837*t32517 + t29165*t32707);
  p_output1[14]=0.1575*t24129*t27456*t31551 + 0.1575*t25055*t32251 - 0.325*t27664*t32763 + 0.575*t26817*t29682*t32763 + 0.575*t27664*t29918*t32763 + 0.0641*(t27664*t29682*t32763 + t26817*t29915*t32763) + 0.295*(-1.*t26817*t29682*t32763 + t27664*t29915*t32763) + 0.2255*t32770;
  p_output1[15]=0.325*t27664*t32510 - 0.325*t26817*t32770 + 0.575*t29918*t32826 + 0.575*t29682*t32843 + 0.295*(t29915*t32826 - 1.*t29682*t32843) + 0.0641*(t29682*t32826 + t29915*t32843);
  p_output1[16]=0.575*t29915*t32826 + 0.575*t29682*t32888 + 0.295*(-1.*t29915*t32826 - 1.*t29682*t32888) + 0.0641*(-1.*t29682*t32826 + t29915*t32888);
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

#include "J_step_distance_rear_ParallelStance.hh"

namespace ParallelStance
{

void J_step_distance_rear_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
