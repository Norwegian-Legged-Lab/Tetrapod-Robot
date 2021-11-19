/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:28 GMT+01:00
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
  double t510;
  double t1032;
  double t1067;
  double t1137;
  double t1165;
  double t1166;
  double t931;
  double t1570;
  double t1155;
  double t1218;
  double t1223;
  double t1443;
  double t1529;
  double t1565;
  double t1596;
  double t1614;
  double t1647;
  double t1683;
  double t1720;
  double t1785;
  double t1802;
  double t1523;
  double t1693;
  double t1805;
  double t1814;
  double t2448;
  double t2459;
  double t2458;
  double t2462;
  double t2476;
  double t2487;
  double t2496;
  double t2507;
  double t2480;
  double t2529;
  double t2551;
  double t2555;
  double t2559;
  double t2572;
  double t2579;
  double t2580;
  double t2453;
  double t2570;
  double t2584;
  double t2585;
  double t2885;
  double t2886;
  double t2903;
  double t2907;
  double t2909;
  double t2912;
  double t2904;
  double t2913;
  double t2914;
  double t2916;
  double t2920;
  double t2925;
  double t2928;
  double t2933;
  double t2884;
  double t2923;
  double t2934;
  double t2936;
  double t3205;
  double t3207;
  double t3217;
  double t3218;
  double t3445;
  double t3448;
  double t3450;
  double t3456;
  double t3651;
  double t3653;
  double t3655;
  double t3656;
  t510 = Cos(var1[4]);
  t1032 = Cos(var1[9]);
  t1067 = -1.*t1032;
  t1137 = 1. + t1067;
  t1165 = Sin(var1[9]);
  t1166 = -0.15121*t1165;
  t931 = Cos(var1[5]);
  t1570 = Sin(var1[5]);
  t1155 = 0.15121*t1137;
  t1218 = t1155 + t1166;
  t1223 = t510*t931*t1218;
  t1443 = Sin(var1[4]);
  t1529 = -0.15121*t1137;
  t1565 = t1529 + t1166;
  t1596 = -1.*t510*t1565*t1570;
  t1614 = -1.*t510*t931*t1165;
  t1647 = -1.*t1032*t510*t1570;
  t1683 = t1614 + t1647;
  t1720 = t1032*t510*t931;
  t1785 = -1.*t510*t1165*t1570;
  t1802 = t1720 + t1785;
  t1523 = 0.002742*t1443;
  t1693 = -0.138827*t1683;
  t1805 = 0.159219*t1802;
  t1814 = var1[0] + t1223 + t1523 + t1596 + t1693 + t1805;
  t2448 = Sin(var1[3]);
  t2459 = Cos(var1[3]);
  t2458 = t931*t2448*t1443;
  t2462 = t2459*t1570;
  t2476 = t2458 + t2462;
  t2487 = t2459*t931;
  t2496 = -1.*t2448*t1443*t1570;
  t2507 = t2487 + t2496;
  t2480 = t1218*t2476;
  t2529 = t1565*t2507;
  t2551 = -1.*t1165*t2476;
  t2555 = t1032*t2507;
  t2559 = t2551 + t2555;
  t2572 = t1032*t2476;
  t2579 = t1165*t2507;
  t2580 = t2572 + t2579;
  t2453 = -0.002742*t510*t2448;
  t2570 = -0.138827*t2559;
  t2584 = 0.159219*t2580;
  t2585 = var1[1] + t2453 + t2480 + t2529 + t2570 + t2584;
  t2885 = -1.*t2459*t931*t1443;
  t2886 = t2448*t1570;
  t2903 = t2885 + t2886;
  t2907 = t931*t2448;
  t2909 = t2459*t1443*t1570;
  t2912 = t2907 + t2909;
  t2904 = t1218*t2903;
  t2913 = t1565*t2912;
  t2914 = -1.*t1165*t2903;
  t2916 = t1032*t2912;
  t2920 = t2914 + t2916;
  t2925 = t1032*t2903;
  t2928 = t1165*t2912;
  t2933 = t2925 + t2928;
  t2884 = 0.002742*t2459*t510;
  t2923 = -0.138827*t2920;
  t2934 = 0.159219*t2933;
  t2936 = var1[2] + t2884 + t2904 + t2913 + t2923 + t2934;
  t3205 = -0.036008*t1443;
  t3207 = -0.214327*t1683;
  t3217 = 0.289219*t1802;
  t3218 = var1[0] + t1223 + t3205 + t1596 + t3207 + t3217;
  t3445 = 0.036008*t510*t2448;
  t3448 = -0.214327*t2559;
  t3450 = 0.289219*t2580;
  t3456 = var1[1] + t3445 + t2480 + t2529 + t3448 + t3450;
  t3651 = -0.036008*t2459*t510;
  t3653 = -0.214327*t2920;
  t3655 = 0.289219*t2933;
  t3656 = var1[2] + t3651 + t2904 + t2913 + t3653 + t3655;
  p_output1[0]=t1814;
  p_output1[1]=t1223 + 0.007225*t1443 + t1596 - 0.140893*t1683 + 0.159356*t1802 + var1[0];
  p_output1[2]=t1223 + 0.010925*t1443 + t1596 - 0.144076*t1683 + 0.15861*t1802 + var1[0];
  p_output1[3]=t1223 + 0.013441*t1443 + t1596 - 0.148033*t1683 + 0.157062*t1802 + var1[0];
  p_output1[4]=t1223 + 0.014501*t1443 + t1596 - 0.152334*t1683 + 0.15488*t1802 + var1[0];
  p_output1[5]=t1223 + 0.013989*t1443 + t1596 - 0.156513*t1683 + 0.1523*t1802 + var1[0];
  p_output1[6]=t1223 + 0.011961*t1443 + t1596 - 0.160117*t1683 + 0.149602*t1802 + var1[0];
  p_output1[7]=t1223 + 0.008637*t1443 + t1596 - 0.162757*t1683 + 0.147079*t1802 + var1[0];
  p_output1[8]=t1223 + 0.004378*t1443 + t1596 - 0.164145*t1683 + 0.145003*t1802 + var1[0];
  p_output1[9]=t1223 - 0.000357*t1443 + t1596 - 0.164131*t1683 + 0.1436*t1802 + var1[0];
  p_output1[10]=t1223 - 0.005052*t1443 + t1596 - 0.162717*t1683 + 0.143021*t1802 + var1[0];
  p_output1[11]=t1223 - 0.0092*t1443 + t1596 - 0.160056*t1683 + 0.14333*t1802 + var1[0];
  p_output1[12]=t1223 - 0.012351*t1443 + t1596 - 0.156437*t1683 + 0.144493*t1802 + var1[0];
  p_output1[13]=t1223 - 0.014164*t1443 + t1596 - 0.152251*t1683 + 0.146383*t1802 + var1[0];
  p_output1[14]=t1223 - 0.014442*t1443 + t1596 - 0.147952*t1683 + 0.148797*t1802 + var1[0];
  p_output1[15]=t1223 - 0.013155*t1443 + t1596 - 0.144007*t1683 + 0.151472*t1802 + var1[0];
  p_output1[16]=t1223 - 0.010442*t1443 + t1596 - 0.140842*t1683 + 0.154119*t1802 + var1[0];
  p_output1[17]=t1223 - 0.006597*t1443 + t1596 - 0.1388*t1683 + 0.156451*t1802 + var1[0];
  p_output1[18]=t1223 - 0.002038*t1443 + t1596 - 0.138103*t1683 + 0.158214*t1802 + var1[0];
  p_output1[19]=t1814;
  p_output1[20]=t2585;
  p_output1[21]=t2480 + t2529 - 0.140893*t2559 + 0.159356*t2580 - 0.007225*t2448*t510 + var1[1];
  p_output1[22]=t2480 + t2529 - 0.144076*t2559 + 0.15861*t2580 - 0.010925*t2448*t510 + var1[1];
  p_output1[23]=t2480 + t2529 - 0.148033*t2559 + 0.157062*t2580 - 0.013441*t2448*t510 + var1[1];
  p_output1[24]=t2480 + t2529 - 0.152334*t2559 + 0.15488*t2580 - 0.014501*t2448*t510 + var1[1];
  p_output1[25]=t2480 + t2529 - 0.156513*t2559 + 0.1523*t2580 - 0.013989*t2448*t510 + var1[1];
  p_output1[26]=t2480 + t2529 - 0.160117*t2559 + 0.149602*t2580 - 0.011961*t2448*t510 + var1[1];
  p_output1[27]=t2480 + t2529 - 0.162757*t2559 + 0.147079*t2580 - 0.008637*t2448*t510 + var1[1];
  p_output1[28]=t2480 + t2529 - 0.164145*t2559 + 0.145003*t2580 - 0.004378*t2448*t510 + var1[1];
  p_output1[29]=t2480 + t2529 - 0.164131*t2559 + 0.1436*t2580 + 0.000357*t2448*t510 + var1[1];
  p_output1[30]=t2480 + t2529 - 0.162717*t2559 + 0.143021*t2580 + 0.005052*t2448*t510 + var1[1];
  p_output1[31]=t2480 + t2529 - 0.160056*t2559 + 0.14333*t2580 + 0.0092*t2448*t510 + var1[1];
  p_output1[32]=t2480 + t2529 - 0.156437*t2559 + 0.144493*t2580 + 0.012351*t2448*t510 + var1[1];
  p_output1[33]=t2480 + t2529 - 0.152251*t2559 + 0.146383*t2580 + 0.014164*t2448*t510 + var1[1];
  p_output1[34]=t2480 + t2529 - 0.147952*t2559 + 0.148797*t2580 + 0.014442*t2448*t510 + var1[1];
  p_output1[35]=t2480 + t2529 - 0.144007*t2559 + 0.151472*t2580 + 0.013155*t2448*t510 + var1[1];
  p_output1[36]=t2480 + t2529 - 0.140842*t2559 + 0.154119*t2580 + 0.010442*t2448*t510 + var1[1];
  p_output1[37]=t2480 + t2529 - 0.1388*t2559 + 0.156451*t2580 + 0.006597*t2448*t510 + var1[1];
  p_output1[38]=t2480 + t2529 - 0.138103*t2559 + 0.158214*t2580 + 0.002038*t2448*t510 + var1[1];
  p_output1[39]=t2585;
  p_output1[40]=t2936;
  p_output1[41]=t2904 + t2913 - 0.140893*t2920 + 0.159356*t2933 + 0.007225*t2459*t510 + var1[2];
  p_output1[42]=t2904 + t2913 - 0.144076*t2920 + 0.15861*t2933 + 0.010925*t2459*t510 + var1[2];
  p_output1[43]=t2904 + t2913 - 0.148033*t2920 + 0.157062*t2933 + 0.013441*t2459*t510 + var1[2];
  p_output1[44]=t2904 + t2913 - 0.152334*t2920 + 0.15488*t2933 + 0.014501*t2459*t510 + var1[2];
  p_output1[45]=t2904 + t2913 - 0.156513*t2920 + 0.1523*t2933 + 0.013989*t2459*t510 + var1[2];
  p_output1[46]=t2904 + t2913 - 0.160117*t2920 + 0.149602*t2933 + 0.011961*t2459*t510 + var1[2];
  p_output1[47]=t2904 + t2913 - 0.162757*t2920 + 0.147079*t2933 + 0.008637*t2459*t510 + var1[2];
  p_output1[48]=t2904 + t2913 - 0.164145*t2920 + 0.145003*t2933 + 0.004378*t2459*t510 + var1[2];
  p_output1[49]=t2904 + t2913 - 0.164131*t2920 + 0.1436*t2933 - 0.000357*t2459*t510 + var1[2];
  p_output1[50]=t2904 + t2913 - 0.162717*t2920 + 0.143021*t2933 - 0.005052*t2459*t510 + var1[2];
  p_output1[51]=t2904 + t2913 - 0.160056*t2920 + 0.14333*t2933 - 0.0092*t2459*t510 + var1[2];
  p_output1[52]=t2904 + t2913 - 0.156437*t2920 + 0.144493*t2933 - 0.012351*t2459*t510 + var1[2];
  p_output1[53]=t2904 + t2913 - 0.152251*t2920 + 0.146383*t2933 - 0.014164*t2459*t510 + var1[2];
  p_output1[54]=t2904 + t2913 - 0.147952*t2920 + 0.148797*t2933 - 0.014442*t2459*t510 + var1[2];
  p_output1[55]=t2904 + t2913 - 0.144007*t2920 + 0.151472*t2933 - 0.013155*t2459*t510 + var1[2];
  p_output1[56]=t2904 + t2913 - 0.140842*t2920 + 0.154119*t2933 - 0.010442*t2459*t510 + var1[2];
  p_output1[57]=t2904 + t2913 - 0.1388*t2920 + 0.156451*t2933 - 0.006597*t2459*t510 + var1[2];
  p_output1[58]=t2904 + t2913 - 0.138103*t2920 + 0.158214*t2933 - 0.002038*t2459*t510 + var1[2];
  p_output1[59]=t2936;
  p_output1[60]=t3218;
  p_output1[61]=t1223 - 0.031525*t1443 + t1596 - 0.216393*t1683 + 0.289356*t1802 + var1[0];
  p_output1[62]=t1223 - 0.027825*t1443 + t1596 - 0.219576*t1683 + 0.28861*t1802 + var1[0];
  p_output1[63]=t1223 - 0.025309*t1443 + t1596 - 0.223533*t1683 + 0.287062*t1802 + var1[0];
  p_output1[64]=t1223 - 0.024249*t1443 + t1596 - 0.227834*t1683 + 0.28488*t1802 + var1[0];
  p_output1[65]=t1223 - 0.024761*t1443 + t1596 - 0.232013*t1683 + 0.2823*t1802 + var1[0];
  p_output1[66]=t1223 - 0.026789*t1443 + t1596 - 0.235617*t1683 + 0.279602*t1802 + var1[0];
  p_output1[67]=t1223 - 0.030113*t1443 + t1596 - 0.238257*t1683 + 0.277079*t1802 + var1[0];
  p_output1[68]=t1223 - 0.034372*t1443 + t1596 - 0.239645*t1683 + 0.275003*t1802 + var1[0];
  p_output1[69]=t1223 - 0.039107*t1443 + t1596 - 0.239631*t1683 + 0.2736*t1802 + var1[0];
  p_output1[70]=t1223 - 0.043802*t1443 + t1596 - 0.238217*t1683 + 0.273021*t1802 + var1[0];
  p_output1[71]=t1223 - 0.04795*t1443 + t1596 - 0.235556*t1683 + 0.27333*t1802 + var1[0];
  p_output1[72]=t1223 - 0.051101*t1443 + t1596 - 0.231937*t1683 + 0.274493*t1802 + var1[0];
  p_output1[73]=t1223 - 0.052914*t1443 + t1596 - 0.227751*t1683 + 0.276383*t1802 + var1[0];
  p_output1[74]=t1223 - 0.053192*t1443 + t1596 - 0.223452*t1683 + 0.278797*t1802 + var1[0];
  p_output1[75]=t1223 - 0.051905*t1443 + t1596 - 0.219507*t1683 + 0.281472*t1802 + var1[0];
  p_output1[76]=t1223 - 0.049192*t1443 + t1596 - 0.216342*t1683 + 0.284119*t1802 + var1[0];
  p_output1[77]=t1223 - 0.045347*t1443 + t1596 - 0.2143*t1683 + 0.286451*t1802 + var1[0];
  p_output1[78]=t1223 - 0.040788*t1443 + t1596 - 0.213603*t1683 + 0.288214*t1802 + var1[0];
  p_output1[79]=t3218;
  p_output1[80]=t3456;
  p_output1[81]=t2480 + t2529 - 0.216393*t2559 + 0.289356*t2580 + 0.031525*t2448*t510 + var1[1];
  p_output1[82]=t2480 + t2529 - 0.219576*t2559 + 0.28861*t2580 + 0.027825*t2448*t510 + var1[1];
  p_output1[83]=t2480 + t2529 - 0.223533*t2559 + 0.287062*t2580 + 0.025309*t2448*t510 + var1[1];
  p_output1[84]=t2480 + t2529 - 0.227834*t2559 + 0.28488*t2580 + 0.024249*t2448*t510 + var1[1];
  p_output1[85]=t2480 + t2529 - 0.232013*t2559 + 0.2823*t2580 + 0.024761*t2448*t510 + var1[1];
  p_output1[86]=t2480 + t2529 - 0.235617*t2559 + 0.279602*t2580 + 0.026789*t2448*t510 + var1[1];
  p_output1[87]=t2480 + t2529 - 0.238257*t2559 + 0.277079*t2580 + 0.030113*t2448*t510 + var1[1];
  p_output1[88]=t2480 + t2529 - 0.239645*t2559 + 0.275003*t2580 + 0.034372*t2448*t510 + var1[1];
  p_output1[89]=t2480 + t2529 - 0.239631*t2559 + 0.2736*t2580 + 0.039107*t2448*t510 + var1[1];
  p_output1[90]=t2480 + t2529 - 0.238217*t2559 + 0.273021*t2580 + 0.043802*t2448*t510 + var1[1];
  p_output1[91]=t2480 + t2529 - 0.235556*t2559 + 0.27333*t2580 + 0.04795*t2448*t510 + var1[1];
  p_output1[92]=t2480 + t2529 - 0.231937*t2559 + 0.274493*t2580 + 0.051101*t2448*t510 + var1[1];
  p_output1[93]=t2480 + t2529 - 0.227751*t2559 + 0.276383*t2580 + 0.052914*t2448*t510 + var1[1];
  p_output1[94]=t2480 + t2529 - 0.223452*t2559 + 0.278797*t2580 + 0.053192*t2448*t510 + var1[1];
  p_output1[95]=t2480 + t2529 - 0.219507*t2559 + 0.281472*t2580 + 0.051905*t2448*t510 + var1[1];
  p_output1[96]=t2480 + t2529 - 0.216342*t2559 + 0.284119*t2580 + 0.049192*t2448*t510 + var1[1];
  p_output1[97]=t2480 + t2529 - 0.2143*t2559 + 0.286451*t2580 + 0.045347*t2448*t510 + var1[1];
  p_output1[98]=t2480 + t2529 - 0.213603*t2559 + 0.288214*t2580 + 0.040788*t2448*t510 + var1[1];
  p_output1[99]=t3456;
  p_output1[100]=t3656;
  p_output1[101]=t2904 + t2913 - 0.216393*t2920 + 0.289356*t2933 - 0.031525*t2459*t510 + var1[2];
  p_output1[102]=t2904 + t2913 - 0.219576*t2920 + 0.28861*t2933 - 0.027825*t2459*t510 + var1[2];
  p_output1[103]=t2904 + t2913 - 0.223533*t2920 + 0.287062*t2933 - 0.025309*t2459*t510 + var1[2];
  p_output1[104]=t2904 + t2913 - 0.227834*t2920 + 0.28488*t2933 - 0.024249*t2459*t510 + var1[2];
  p_output1[105]=t2904 + t2913 - 0.232013*t2920 + 0.2823*t2933 - 0.024761*t2459*t510 + var1[2];
  p_output1[106]=t2904 + t2913 - 0.235617*t2920 + 0.279602*t2933 - 0.026789*t2459*t510 + var1[2];
  p_output1[107]=t2904 + t2913 - 0.238257*t2920 + 0.277079*t2933 - 0.030113*t2459*t510 + var1[2];
  p_output1[108]=t2904 + t2913 - 0.239645*t2920 + 0.275003*t2933 - 0.034372*t2459*t510 + var1[2];
  p_output1[109]=t2904 + t2913 - 0.239631*t2920 + 0.2736*t2933 - 0.039107*t2459*t510 + var1[2];
  p_output1[110]=t2904 + t2913 - 0.238217*t2920 + 0.273021*t2933 - 0.043802*t2459*t510 + var1[2];
  p_output1[111]=t2904 + t2913 - 0.235556*t2920 + 0.27333*t2933 - 0.04795*t2459*t510 + var1[2];
  p_output1[112]=t2904 + t2913 - 0.231937*t2920 + 0.274493*t2933 - 0.051101*t2459*t510 + var1[2];
  p_output1[113]=t2904 + t2913 - 0.227751*t2920 + 0.276383*t2933 - 0.052914*t2459*t510 + var1[2];
  p_output1[114]=t2904 + t2913 - 0.223452*t2920 + 0.278797*t2933 - 0.053192*t2459*t510 + var1[2];
  p_output1[115]=t2904 + t2913 - 0.219507*t2920 + 0.281472*t2933 - 0.051905*t2459*t510 + var1[2];
  p_output1[116]=t2904 + t2913 - 0.216342*t2920 + 0.284119*t2933 - 0.049192*t2459*t510 + var1[2];
  p_output1[117]=t2904 + t2913 - 0.2143*t2920 + 0.286451*t2933 - 0.045347*t2459*t510 + var1[2];
  p_output1[118]=t2904 + t2913 - 0.213603*t2920 + 0.288214*t2933 - 0.040788*t2459*t510 + var1[2];
  p_output1[119]=t3656;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 6, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Link_fr_hip_to_fr_hip_pitch_bar.hh"

namespace SymFunction
{

void Link_fr_hip_to_fr_hip_pitch_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
