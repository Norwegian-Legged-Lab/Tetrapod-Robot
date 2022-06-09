/*
 * Automatically Generated from Mathematica.
 * Sat 4 Jun 2022 18:49:26 GMT+02:00
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
  double t6322;
  double t6293;
  double t6314;
  double t6326;
  double t6318;
  double t6327;
  double t6328;
  double t6290;
  double t6330;
  double t6331;
  double t6332;
  double t6292;
  double t6333;
  double t6385;
  double t6329;
  double t6334;
  double t6335;
  double t6273;
  double t6392;
  double t6394;
  double t6395;
  double t6398;
  double t6400;
  double t6401;
  double t6405;
  double t6406;
  double t6408;
  double t6420;
  double t6421;
  double t6422;
  double t6443;
  double t6447;
  double t6452;
  double t6440;
  double t6454;
  double t6455;
  double t6460;
  double t6463;
  double t6464;
  double t6465;
  double t6467;
  double t6468;
  double t6484;
  double t6488;
  double t6492;
  double t6515;
  double t6516;
  double t6517;
  double t6519;
  double t6520;
  double t6521;
  double t6522;
  double t6523;
  double t6524;
  double t6514;
  double t6518;
  double t6525;
  double t6526;
  double t6513;
  double t6527;
  double t6528;
  double t6532;
  double t6533;
  double t6534;
  double t6535;
  double t6538;
  double t6539;
  double t6540;
  double t6544;
  double t6548;
  double t6549;
  double t6550;
  double t6551;
  double t6552;
  double t6554;
  double t6556;
  double t6569;
  double t6570;
  double t6571;
  double t6566;
  double t6567;
  double t6568;
  double t6562;
  double t6563;
  double t6564;
  double t6506;
  double t6507;
  double t6511;
  double t6529;
  double t6557;
  double t6558;
  double t6579;
  double t6580;
  double t6581;
  double t6573;
  double t6574;
  double t6575;
  double t6618;
  double t6619;
  double t6620;
  double t6587;
  double t6588;
  double t6589;
  double t6703;
  double t6704;
  double t6708;
  double t6582;
  double t6600;
  double t6731;
  double t6732;
  double t6734;
  double t6739;
  double t6750;
  double t6751;
  double t6752;
  double t6583;
  double t6584;
  double t6585;
  double t6754;
  double t6758;
  double t6601;
  double t6602;
  double t6605;
  double t6628;
  double t6639;
  double t6794;
  double t6797;
  double t6629;
  double t6630;
  double t6631;
  double t6809;
  double t6811;
  double t6640;
  double t6641;
  double t6642;
  double t6669;
  double t6686;
  double t6864;
  double t6670;
  double t6671;
  double t6672;
  double t6874;
  double t6876;
  double t6691;
  double t6692;
  double t6693;
  double t6727;
  double t6744;
  double t6922;
  double t6923;
  double t6926;
  double t6932;
  double t6933;
  double t6957;
  double t6958;
  double t6959;
  double t6728;
  double t6729;
  double t6930;
  double t6934;
  double t6942;
  double t6944;
  double t6745;
  double t6746;
  double t6968;
  double t6969;
  double t6973;
  double t6977;
  double t6978;
  double t6987;
  double t6988;
  double t6989;
  double t6991;
  double t6992;
  double t6993;
  double t6995;
  double t6996;
  double t6997;
  double t6999;
  double t7001;
  double t7002;
  double t6804;
  double t6800;
  double t7005;
  double t7006;
  double t7008;
  double t7026;
  double t7028;
  double t6801;
  double t6802;
  double t7036;
  double t7038;
  double t6805;
  double t6806;
  double t7057;
  double t7059;
  double t6951;
  double t6952;
  double t6953;
  double t7064;
  double t7065;
  double t7013;
  double t7014;
  double t7015;
  double t6853;
  double t6879;
  double t6854;
  double t6857;
  double t7093;
  double t7095;
  double t6970;
  double t7099;
  double t7101;
  double t6880;
  double t6881;
  double t7120;
  double t7123;
  double t7127;
  double t7129;
  double t6917;
  double t6918;
  double t7152;
  double t7153;
  double t7154;
  double t7169;
  double t7170;
  double t6477;
  double t6480;
  double t6481;
  double t7162;
  double t7163;
  double t7164;
  double t7165;
  double t7160;
  double t7168;
  double t7171;
  double t7193;
  double t7194;
  double t7195;
  double t7184;
  double t7185;
  double t7186;
  double t7189;
  double t7190;
  double t7191;
  double t7200;
  double t7201;
  double t7202;
  double t7196;
  double t7199;
  double t7204;
  double t7210;
  double t7211;
  double t7212;
  double t7214;
  double t7215;
  double t7216;
  double t7218;
  double t7219;
  double t7220;
  double t7031;
  double t7032;
  double t7033;
  double t7041;
  double t7042;
  double t7043;
  double t7172;
  double t6937;
  double t6938;
  double t7240;
  double t7241;
  double t7248;
  double t7246;
  double t7238;
  double t7242;
  double t7272;
  double t7275;
  double t7277;
  double t7225;
  double t7226;
  double t7227;
  double t7089;
  double t7090;
  double t7300;
  double t7319;
  double t7323;
  double t7342;
  double t7343;
  double t7344;
  double t7356;
  double t7357;
  double t7358;
  double t7366;
  double t7367;
  double t7368;
  double t7372;
  double t7373;
  double t7374;
  double t7376;
  double t7377;
  double t7378;
  double t7353;
  double t7354;
  double t7359;
  double t7392;
  double t7393;
  double t7394;
  double t7388;
  double t7389;
  double t7390;
  double t7395;
  double t7398;
  double t7405;
  double t7406;
  double t7407;
  double t7409;
  double t7410;
  double t7411;
  double t7104;
  double t7105;
  double t7253;
  double t7254;
  double t7260;
  double t7261;
  double t7424;
  double t7429;
  double t7434;
  double t7430;
  double t7432;
  double t7425;
  double t7452;
  double t7455;
  double t7365;
  double t7369;
  double t7370;
  double t7459;
  double t6413;
  double t6414;
  double t6415;
  double t7488;
  double t7490;
  double t7506;
  double t7509;
  double t7512;
  t6322 = Cos(var1[16]);
  t6293 = Cos(var1[17]);
  t6314 = Sin(var1[16]);
  t6326 = Sin(var1[17]);
  t6318 = t6293*t6314;
  t6327 = -1.*t6322*t6326;
  t6328 = t6318 + t6327;
  t6290 = Cos(var1[5]);
  t6330 = t6322*t6293;
  t6331 = t6314*t6326;
  t6332 = t6330 + t6331;
  t6292 = Sin(var1[15]);
  t6333 = Sin(var1[5]);
  t6385 = Cos(var1[3]);
  t6329 = -1.*t6290*t6292*t6328;
  t6334 = t6332*t6333;
  t6335 = t6329 + t6334;
  t6273 = Sin(var1[3]);
  t6392 = Cos(var1[15]);
  t6394 = Cos(var1[4]);
  t6395 = t6392*t6394*t6328;
  t6398 = Sin(var1[4]);
  t6400 = t6290*t6332;
  t6401 = t6292*t6328*t6333;
  t6405 = t6400 + t6401;
  t6406 = -1.*t6398*t6405;
  t6408 = t6395 + t6406;
  t6420 = t6394*t6292;
  t6421 = t6392*t6398*t6333;
  t6422 = t6420 + t6421;
  t6443 = -1.*t6293*t6314;
  t6447 = t6322*t6326;
  t6452 = t6443 + t6447;
  t6440 = -1.*t6290*t6292*t6332;
  t6454 = t6452*t6333;
  t6455 = t6440 + t6454;
  t6460 = t6392*t6394*t6332;
  t6463 = t6290*t6452;
  t6464 = t6292*t6332*t6333;
  t6465 = t6463 + t6464;
  t6467 = -1.*t6398*t6465;
  t6468 = t6460 + t6467;
  t6484 = -1.*t6392*t6328*t6398;
  t6488 = -1.*t6394*t6405;
  t6492 = t6484 + t6488;
  t6515 = -0.0641*t6293;
  t6516 = -0.28*t6326;
  t6517 = t6515 + t6516;
  t6519 = -1.*t6293;
  t6520 = 1. + t6519;
  t6521 = -0.575*t6520;
  t6522 = -0.295*t6293;
  t6523 = -0.0641*t6326;
  t6524 = t6521 + t6522 + t6523;
  t6514 = 0.325*t6314;
  t6518 = t6322*t6517;
  t6525 = t6314*t6524;
  t6526 = t6514 + t6518 + t6525;
  t6513 = -0.068*t6292;
  t6527 = t6392*t6526;
  t6528 = t6513 + t6527;
  t6532 = -1.*t6322;
  t6533 = 1. + t6532;
  t6534 = -0.325*t6533;
  t6535 = -1.*t6314*t6517;
  t6538 = t6322*t6524;
  t6539 = t6534 + t6535 + t6538;
  t6540 = t6290*t6539;
  t6544 = -1.*t6392;
  t6548 = 1. + t6544;
  t6549 = -0.1575*t6548;
  t6550 = -0.2255*t6392;
  t6551 = -1.*t6292*t6526;
  t6552 = t6549 + t6550 + t6551;
  t6554 = -1.*t6552*t6333;
  t6556 = t6540 + t6554;
  t6569 = t6394*t6528;
  t6570 = -1.*t6398*t6556;
  t6571 = t6569 + t6570;
  t6566 = t6292*t6398;
  t6567 = -1.*t6392*t6394*t6333;
  t6568 = t6566 + t6567;
  t6562 = t6528*t6398;
  t6563 = t6394*t6556;
  t6564 = t6562 + t6563;
  t6506 = t6392*t6332*t6398;
  t6507 = t6394*t6465;
  t6511 = t6506 + t6507;
  t6529 = -1.*t6528*t6398;
  t6557 = -1.*t6394*t6556;
  t6558 = t6529 + t6557;
  t6579 = t6290*t6552;
  t6580 = t6539*t6333;
  t6581 = t6579 + t6580;
  t6573 = -1.*t6292*t6398;
  t6574 = t6392*t6394*t6333;
  t6575 = t6573 + t6574;
  t6618 = t6392*t6328*t6398;
  t6619 = t6394*t6405;
  t6620 = t6618 + t6619;
  t6587 = -1.*t6392*t6332*t6398;
  t6588 = -1.*t6394*t6465;
  t6589 = t6587 + t6588;
  t6703 = t6290*t6292*t6328;
  t6704 = -1.*t6332*t6333;
  t6708 = t6703 + t6704;
  t6582 = -1.*t6392*t6290*t6581;
  t6600 = t6581*t6455;
  t6731 = -1.*t6290*t6552;
  t6732 = -1.*t6539*t6333;
  t6734 = t6731 + t6732;
  t6739 = t6392*t6333*t6581;
  t6750 = t6290*t6292*t6332;
  t6751 = -1.*t6452*t6333;
  t6752 = t6750 + t6751;
  t6583 = -1.*t6568*t6564;
  t6584 = -1.*t6422*t6571;
  t6585 = t6582 + t6583 + t6584;
  t6754 = t6556*t6455;
  t6758 = t6581*t6465;
  t6601 = t6564*t6511;
  t6602 = t6571*t6468;
  t6605 = t6600 + t6601 + t6602;
  t6628 = t6581*t6335;
  t6639 = -1.*t6581*t6455;
  t6794 = t6581*t6405;
  t6797 = t6556*t6335;
  t6629 = t6564*t6620;
  t6630 = t6571*t6408;
  t6631 = t6628 + t6629 + t6630;
  t6809 = -1.*t6556*t6455;
  t6811 = -1.*t6581*t6465;
  t6640 = -1.*t6564*t6511;
  t6641 = -1.*t6571*t6468;
  t6642 = t6639 + t6640 + t6641;
  t6669 = t6392*t6290*t6581;
  t6686 = -1.*t6581*t6335;
  t6864 = -1.*t6392*t6333*t6581;
  t6670 = t6568*t6564;
  t6671 = t6422*t6571;
  t6672 = t6669 + t6670 + t6671;
  t6874 = -1.*t6581*t6405;
  t6876 = -1.*t6556*t6335;
  t6691 = -1.*t6564*t6620;
  t6692 = -1.*t6571*t6408;
  t6693 = t6686 + t6691 + t6692;
  t6727 = -1.*t6292*t6528;
  t6744 = t6392*t6528*t6332;
  t6922 = 0.068*t6292;
  t6923 = -1.*t6392*t6526;
  t6926 = t6922 + t6923;
  t6932 = -0.068*t6392;
  t6933 = t6932 + t6551;
  t6957 = -1.*t6394*t6292*t6328;
  t6958 = -1.*t6392*t6328*t6398*t6333;
  t6959 = t6957 + t6958;
  t6728 = t6392*t6333*t6556;
  t6729 = t6727 + t6728 + t6582;
  t6930 = -1.*t6392*t6528;
  t6934 = -1.*t6292*t6933;
  t6942 = -1.*t6292*t6528*t6332;
  t6944 = t6392*t6933*t6332;
  t6745 = t6556*t6465;
  t6746 = t6744 + t6600 + t6745;
  t6968 = Power(t6290,2);
  t6969 = -1.*t6392*t6968*t6926;
  t6973 = t6290*t6292*t6581;
  t6977 = -1.*t6392*t6290*t6332*t6581;
  t6978 = t6290*t6926*t6455;
  t6987 = -1.*t6292*t6332*t6398;
  t6988 = t6392*t6394*t6332*t6333;
  t6989 = t6987 + t6988;
  t6991 = t6933*t6398;
  t6992 = -1.*t6394*t6926*t6333;
  t6993 = t6991 + t6992;
  t6995 = t6394*t6933;
  t6996 = t6926*t6398*t6333;
  t6997 = t6995 + t6996;
  t6999 = t6392*t6398;
  t7001 = t6394*t6292*t6333;
  t7002 = t6999 + t7001;
  t6804 = -1.*t6392*t6528*t6332;
  t6800 = t6392*t6528*t6328;
  t7005 = t6392*t6394;
  t7006 = -1.*t6292*t6398*t6333;
  t7008 = t7005 + t7006;
  t7026 = -1.*t6292*t6528*t6328;
  t7028 = t6392*t6933*t6328;
  t6801 = t6556*t6405;
  t6802 = t6800 + t6801 + t6628;
  t7036 = t6292*t6528*t6332;
  t7038 = -1.*t6392*t6933*t6332;
  t6805 = -1.*t6556*t6465;
  t6806 = t6804 + t6639 + t6805;
  t7057 = -1.*t6392*t6290*t6328*t6581;
  t7059 = t6290*t6926*t6335;
  t6951 = -1.*t6292*t6328*t6398;
  t6952 = t6392*t6394*t6328*t6333;
  t6953 = t6951 + t6952;
  t7064 = t6392*t6290*t6332*t6581;
  t7065 = -1.*t6290*t6926*t6455;
  t7013 = -1.*t6394*t6292*t6332;
  t7014 = -1.*t6392*t6332*t6398*t6333;
  t7015 = t7013 + t7014;
  t6853 = t6292*t6528;
  t6879 = -1.*t6392*t6528*t6328;
  t6854 = -1.*t6392*t6333*t6556;
  t6857 = t6853 + t6854 + t6669;
  t7093 = t6392*t6528;
  t7095 = t6292*t6933;
  t6970 = Power(t6333,2);
  t7099 = t6292*t6528*t6328;
  t7101 = -1.*t6392*t6933*t6328;
  t6880 = -1.*t6556*t6405;
  t6881 = t6879 + t6880 + t6686;
  t7120 = t6392*t6968*t6926;
  t7123 = -1.*t6290*t6292*t6581;
  t7127 = t6392*t6290*t6328*t6581;
  t7129 = -1.*t6290*t6926*t6335;
  t6917 = -1.*t6392*t6552;
  t6918 = t6727 + t6917;
  t7152 = -1.*t6322*t6293;
  t7153 = -1.*t6314*t6326;
  t7154 = t7152 + t7153;
  t7169 = 0.325*t6322;
  t7170 = t7169 + t6535 + t6538;
  t6477 = t6385*t6455;
  t6480 = -1.*t6273*t6468;
  t6481 = t6477 + t6480;
  t7162 = -0.325*t6314;
  t7163 = -1.*t6322*t6517;
  t7164 = -1.*t6314*t6524;
  t7165 = t7162 + t7163 + t7164;
  t7160 = t6392*t6528*t6452;
  t7168 = Power(t6392,2);
  t7171 = t7168*t7170*t6332;
  t7193 = -1.*t6290*t6292*t7170;
  t7194 = t7165*t6333;
  t7195 = t7193 + t7194;
  t7184 = -1.*t6290*t6292*t6452;
  t7185 = t7154*t6333;
  t7186 = t7184 + t7185;
  t7189 = t6290*t7165;
  t7190 = t6292*t7170*t6333;
  t7191 = t7189 + t7190;
  t7200 = t6290*t7154;
  t7201 = t6292*t6452*t6333;
  t7202 = t7200 + t7201;
  t7196 = -1.*t6392*t6290*t7195;
  t7199 = t7195*t6455;
  t7204 = t6581*t7186;
  t7210 = t6392*t6452*t6398;
  t7211 = t6394*t7202;
  t7212 = t7210 + t7211;
  t7214 = t6392*t7170*t6398;
  t7215 = t6394*t7191;
  t7216 = t7214 + t7215;
  t7218 = t6392*t6394*t7170;
  t7219 = -1.*t6398*t7191;
  t7220 = t7218 + t7219;
  t7031 = -1.*t6539*t6452;
  t7032 = t6292*t6552*t6332;
  t7033 = t7031 + t6804 + t7032;
  t7041 = -1.*t6292*t6552*t6328;
  t7042 = t6539*t6332;
  t7043 = t6800 + t7041 + t7042;
  t7172 = Power(t6292,2);
  t6937 = t6539*t6452;
  t6938 = -1.*t6292*t6552*t6332;
  t7240 = -1.*t7165*t6452;
  t7241 = -1.*t6539*t7154;
  t7248 = t7165*t6332;
  t7246 = t7168*t7170*t6328;
  t7238 = -1.*t6392*t6528*t6452;
  t7242 = -1.*t7168*t7170*t6332;
  t7272 = t7195*t6335;
  t7275 = -1.*t7195*t6455;
  t7277 = -1.*t6581*t7186;
  t7225 = t6392*t6394*t6452;
  t7226 = -1.*t6398*t7202;
  t7227 = t7225 + t7226;
  t7089 = t6392*t6552;
  t7090 = t6853 + t7089;
  t7300 = -1.*t7168*t7170*t6328;
  t7319 = t6392*t6290*t7195;
  t7323 = -1.*t7195*t6335;
  t7342 = -0.28*t6293;
  t7343 = 0.0641*t6326;
  t7344 = t7342 + t7343;
  t7356 = t6314*t6517;
  t7357 = t6322*t7344;
  t7358 = t7356 + t7357;
  t7366 = t6290*t6328;
  t7367 = t6292*t7154*t6333;
  t7368 = t7366 + t7367;
  t7372 = -1.*t6290*t6292*t7154;
  t7373 = t6328*t6333;
  t7374 = t7372 + t7373;
  t7376 = t6392*t6394*t7154;
  t7377 = -1.*t6398*t7368;
  t7378 = t7376 + t7377;
  t7353 = -1.*t6314*t7344;
  t7354 = t6518 + t7353;
  t7359 = t7168*t7358*t6332;
  t7392 = -1.*t6290*t6292*t7358;
  t7393 = t7354*t6333;
  t7394 = t7392 + t7393;
  t7388 = t6290*t7354;
  t7389 = t6292*t7358*t6333;
  t7390 = t7388 + t7389;
  t7395 = -1.*t6392*t6290*t7394;
  t7398 = t7394*t6455;
  t7405 = t6392*t7358*t6398;
  t7406 = t6394*t7390;
  t7407 = t7405 + t7406;
  t7409 = t6392*t6394*t7358;
  t7410 = -1.*t6398*t7390;
  t7411 = t7409 + t7410;
  t7104 = t6292*t6552*t6328;
  t7105 = -1.*t6539*t6332;
  t7253 = t6526*t6328;
  t7254 = t7253 + t7042;
  t7260 = -1.*t6526*t6332;
  t7261 = t7031 + t7260;
  t7424 = -1.*t7354*t6452;
  t7429 = t6539*t6328;
  t7434 = t7354*t6332;
  t7430 = t7168*t7358*t6328;
  t7432 = t6392*t6528*t7154;
  t7425 = -1.*t7168*t7358*t6332;
  t7452 = t6581*t7374;
  t7455 = t7394*t6335;
  t7365 = t6392*t7154*t6398;
  t7369 = t6394*t7368;
  t7370 = t7365 + t7369;
  t7459 = -1.*t7394*t6455;
  t6413 = t6385*t6335;
  t6414 = -1.*t6273*t6408;
  t6415 = t6413 + t6414;
  t7488 = -1.*t7168*t7358*t6328;
  t7490 = -1.*t6392*t6528*t7154;
  t7506 = t6392*t6290*t7394;
  t7509 = -1.*t6581*t7374;
  t7512 = -1.*t7394*t6335;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t6273*t6335 - 1.*t6385*t6408)*var2[1] + t6415*var2[2];
  p_output1[10]=(-1.*t6273*t6290*t6392 - 1.*t6385*t6422)*var2[1] + (t6290*t6385*t6392 - 1.*t6273*t6422)*var2[2];
  p_output1[11]=(-1.*t6273*t6455 - 1.*t6385*t6468)*var2[1] + t6481*var2[2];
  p_output1[12]=t6408*var2[0] - 1.*t6273*t6492*var2[1] + t6385*t6492*var2[2] + (t6511*(-1.*t6422*t6558 - 1.*t6422*t6564 - 1.*t6568*t6571 - 1.*t6571*t6575) + t6468*t6585 + t6568*(t6468*t6558 + t6468*t6564 + t6511*t6571 + t6571*t6589) + t6422*t6605)*var2[3];
  p_output1[13]=t6422*var2[0] - 1.*t6273*t6575*var2[1] + t6385*t6575*var2[2] + ((-1.*t6468*t6558 - 1.*t6468*t6564 - 1.*t6511*t6571 - 1.*t6571*t6589)*t6620 + t6511*(t6408*t6558 + t6408*t6564 + t6492*t6571 + t6571*t6620) + t6468*t6631 + t6408*t6642)*var2[3];
  p_output1[14]=t6468*var2[0] - 1.*t6273*t6589*var2[1] + t6385*t6589*var2[2] + ((t6422*t6558 + t6422*t6564 + t6568*t6571 + t6571*t6575)*t6620 + t6568*(-1.*t6408*t6558 - 1.*t6408*t6564 - 1.*t6492*t6571 - 1.*t6571*t6620) + t6408*t6672 + t6422*t6693)*var2[3];
  p_output1[15]=t6394*t6708*var2[0] + (t6385*t6405 + t6273*t6398*t6708)*var2[1] + (t6273*t6405 - 1.*t6385*t6398*t6708)*var2[2] + (-1.*t6290*t6392*t6394*t6605 + t6511*(-1.*t6290*t6392*t6556 + t6290*t6392*t6394*t6564 - 1.*t6290*t6392*t6398*t6571 + t6398*t6422*t6734 - 1.*t6394*t6568*t6734 + t6739) + t6394*t6585*t6752 + t6568*(-1.*t6398*t6468*t6734 + t6394*t6511*t6734 + t6394*t6564*t6752 - 1.*t6398*t6571*t6752 + t6754 + t6758))*var2[3] + (t6465*t6729 + t6455*(t6333*t6392*t6734 + t6739) - 1.*t6333*t6392*t6746 + t6290*t6392*(t6465*t6734 + t6556*t6752 + t6754 + t6758))*var2[4];
  p_output1[16]=-1.*t6290*t6392*t6394*var2[0] + (-1.*t6333*t6385*t6392 - 1.*t6273*t6290*t6392*t6398)*var2[1] + (-1.*t6273*t6333*t6392 + t6290*t6385*t6392*t6398)*var2[2] + (t6394*t6642*t6708 + t6394*t6631*t6752 + t6511*(t6394*t6564*t6708 - 1.*t6398*t6571*t6708 - 1.*t6398*t6408*t6734 + t6394*t6620*t6734 + t6794 + t6797) + t6620*(t6398*t6468*t6734 - 1.*t6394*t6511*t6734 - 1.*t6394*t6564*t6752 + t6398*t6571*t6752 + t6809 + t6811))*var2[3] + (t6455*(t6556*t6708 + t6405*t6734 + t6794 + t6797) + t6465*t6802 + t6405*t6806 + t6335*(-1.*t6465*t6734 - 1.*t6556*t6752 + t6809 + t6811))*var2[4];
  p_output1[17]=t6394*t6752*var2[0] + (t6385*t6465 + t6273*t6398*t6752)*var2[1] + (t6273*t6465 - 1.*t6385*t6398*t6752)*var2[2] + (-1.*t6290*t6392*t6394*t6693 + t6394*t6672*t6708 + t6620*(t6290*t6392*t6556 - 1.*t6290*t6392*t6394*t6564 + t6290*t6392*t6398*t6571 - 1.*t6398*t6422*t6734 + t6394*t6568*t6734 + t6864) + t6568*(-1.*t6394*t6564*t6708 + t6398*t6571*t6708 + t6398*t6408*t6734 - 1.*t6394*t6620*t6734 + t6874 + t6876))*var2[3] + (t6405*t6857 + t6335*(-1.*t6333*t6392*t6734 + t6864) + t6290*t6392*(-1.*t6556*t6708 - 1.*t6405*t6734 + t6874 + t6876) - 1.*t6333*t6392*t6881)*var2[4];
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
  p_output1[45]=t6953*var2[0] + (-1.*t6290*t6328*t6385*t6392 - 1.*t6273*t6959)*var2[1] + (-1.*t6273*t6290*t6328*t6392 + t6385*t6959)*var2[2] + (t6585*t6989 + t6605*t7002 + t6511*(t6969 + t6973 - 1.*t6568*t6993 - 1.*t6422*t6997 - 1.*t6564*t7002 - 1.*t6571*t7008) + t6568*(t6977 + t6978 + t6564*t6989 + t6511*t6993 + t6468*t6997 + t6571*t7015))*var2[3] + (-1.*t6290*t6332*t6392*t6729 - 1.*t6290*t6292*t6746 + t6455*(-1.*t6292*t6333*t6556 + t6930 + t6934 + t6969 - 1.*t6392*t6926*t6970 + t6973) + t6290*t6392*(t6332*t6333*t6392*t6556 - 1.*t6333*t6465*t6926 + t6942 + t6944 + t6977 + t6978))*var2[4] + (-1.*t6292*t6332*t6918 + t6332*t6392*(t6292*t6552 - 1.*t6392*t6926 + t6930 + t6934) + t6392*(t6744 + t6937 + t6938) + t6292*(-1.*t6332*t6392*t6552 - 1.*t6292*t6332*t6926 + t6942 + t6944))*var2[5];
  p_output1[46]=t7002*var2[0] + (-1.*t6290*t6292*t6385 - 1.*t6273*t7008)*var2[1] + (-1.*t6273*t6290*t6292 + t6385*t7008)*var2[2] + (t6642*t6953 + t6631*t6989 + t6511*(t6564*t6953 + t6571*t6959 + t6620*t6993 + t6408*t6997 + t7057 + t7059) + t6620*(-1.*t6564*t6989 - 1.*t6511*t6993 - 1.*t6468*t6997 - 1.*t6571*t7015 + t7064 + t7065))*var2[3] + (-1.*t6290*t6332*t6392*t6802 - 1.*t6290*t6328*t6392*t6806 + t6455*(t6328*t6333*t6392*t6556 - 1.*t6333*t6405*t6926 + t7026 + t7028 + t7057 + t7059) + t6335*(-1.*t6332*t6333*t6392*t6556 + t6333*t6465*t6926 + t7036 + t7038 + t7064 + t7065))*var2[4] + (t6332*t6392*(-1.*t6328*t6392*t6552 - 1.*t6292*t6328*t6926 + t7026 + t7028) - 1.*t6292*t6328*t7033 + t6328*t6392*(t6332*t6392*t6552 + t6292*t6332*t6926 + t7036 + t7038) - 1.*t6292*t6332*t7043)*var2[5];
  p_output1[47]=t6989*var2[0] + (-1.*t6290*t6332*t6385*t6392 - 1.*t6273*t7015)*var2[1] + (-1.*t6273*t6290*t6332*t6392 + t6385*t7015)*var2[2] + (t6672*t6953 + t6693*t7002 + t6620*(t6568*t6993 + t6422*t6997 + t6564*t7002 + t6571*t7008 + t7120 + t7123) + t6568*(-1.*t6564*t6953 - 1.*t6571*t6959 - 1.*t6620*t6993 - 1.*t6408*t6997 + t7127 + t7129))*var2[3] + (-1.*t6290*t6328*t6392*t6857 - 1.*t6290*t6292*t6881 + t6335*(t6292*t6333*t6556 + t6392*t6926*t6970 + t7093 + t7095 + t7120 + t7123) + t6290*t6392*(-1.*t6328*t6333*t6392*t6556 + t6333*t6405*t6926 + t7099 + t7101 + t7127 + t7129))*var2[4] + (-1.*t6292*t6328*t7090 + t6328*t6392*(-1.*t6292*t6552 + t6392*t6926 + t7093 + t7095) + t6292*(t6328*t6392*t6552 + t6292*t6328*t6926 + t7099 + t7101) + t6392*(t6879 + t7104 + t7105))*var2[5];
  p_output1[48]=t6511*var2[0] + t6481*var2[1] + (t6273*t6455 + t6385*t6468)*var2[2] + (t6585*t7212 + t6511*(t7196 - 1.*t6568*t7216 - 1.*t6422*t7220) + t6568*(t7199 + t7204 + t6564*t7212 + t6511*t7216 + t6468*t7220 + t6571*t7227))*var2[3] + (t6729*t7186 + t6455*(-1.*t6292*t6392*t7170 + t6333*t6392*t7191 + t7196) + t6290*t6392*(t7160 + t7171 + t6465*t7191 + t7199 + t6556*t7202 + t7204))*var2[4] + (t6392*t6452*t6918 + t6292*(-1.*t6292*t6452*t6552 + t6539*t7154 + t7160 + t6452*t7165 + t7171 + t6332*t7170*t7172))*var2[5] + (0.1575*t6332 + 0.2255*t7154)*var2[15];
  p_output1[49]=(t6511*t6642 + t6631*t7212 + t6511*(t6600 + t6601 + t6602 + t6620*t7216 + t6408*t7220 + t7272) + t6620*(-1.*t6564*t7212 - 1.*t6511*t7216 - 1.*t6468*t7220 - 1.*t6571*t7227 + t7275 + t7277))*var2[3] + (t6455*t6806 + t6802*t7186 + t6455*(t6600 + t6744 + t6745 + t6405*t7191 + t7246 + t7272) + t6335*(-1.*t6465*t7191 - 1.*t6556*t7202 + t7238 + t7242 + t7275 + t7277))*var2[4] + (t6332*t6392*t7033 + t6392*t6452*t7043 + t6328*t6392*(t6292*t6452*t6552 - 1.*t6332*t7170*t7172 + t7238 + t7240 + t7241 + t7242) + t6332*t6392*(t6744 + t6937 + t6938 + t6328*t7170*t7172 + t7246 + t7248))*var2[5] + (t6332*(-1.*t6452*t6526 - 1.*t6332*t7170 + t7240 + t7241) + t6452*(t6332*t6526 + t6937 + t6328*t7170 + t7248) + t7154*t7254 + t6452*t7261)*var2[15];
  p_output1[50]=t7212*var2[0] + (t6385*t7186 - 1.*t6273*t7227)*var2[1] + (t6273*t7186 + t6385*t7227)*var2[2] + (t6511*t6672 + t6620*(t6568*t7216 + t6422*t7220 + t7319) + t6568*(t6639 + t6640 + t6641 - 1.*t6620*t7216 - 1.*t6408*t7220 + t7323))*var2[3] + (t6455*t6857 + t6335*(t6292*t6392*t7170 - 1.*t6333*t6392*t7191 + t7319) + t6290*t6392*(t6639 + t6804 + t6805 - 1.*t6405*t7191 + t7300 + t7323))*var2[4] + (t6332*t6392*t7090 + t6292*(t6804 + t7031 + t7032 - 1.*t6332*t7165 - 1.*t6328*t7170*t7172 + t7300))*var2[5] - 0.068*t6452*var2[15];
  p_output1[51]=t7370*var2[0] + (t6385*t7374 - 1.*t6273*t7378)*var2[1] + (t6273*t7374 + t6385*t7378)*var2[2] + (t6585*t6620 + t6511*(t7395 - 1.*t6568*t7407 - 1.*t6422*t7411) + t6568*(t6628 + t6629 + t6630 + t7398 + t6511*t7407 + t6468*t7411))*var2[3] + (t6335*t6729 + t6455*(-1.*t6292*t6392*t7358 + t6333*t6392*t7390 + t7395) + t6290*t6392*(t6628 + t6800 + t6801 + t7359 + t6465*t7390 + t7398))*var2[4] + (t6328*t6392*t6918 + t6292*(t6800 + t7041 + t7042 + t6452*t7354 + t6332*t7172*t7358 + t7359))*var2[5] + (0.2255*t6332 + 0.1575*t7154)*var2[15] + (-0.325*t6293 - 1.*t6293*t6524 - 1.*t6293*t7344)*var2[16];
  p_output1[52]=(t6620*t6631 + t6642*t7370 + t6511*(t6564*t7370 + t6571*t7378 + t6620*t7407 + t6408*t7411 + t7452 + t7455) + t6620*(t6686 + t6691 + t6692 - 1.*t6511*t7407 - 1.*t6468*t7411 + t7459))*var2[3] + (t6335*t6802 + t6806*t7374 + t6455*(t6556*t7368 + t6405*t7390 + t7430 + t7432 + t7452 + t7455) + t6335*(t6686 + t6879 + t6880 - 1.*t6465*t7390 + t7425 + t7459))*var2[4] + (t6328*t6392*t7043 + t6392*t7033*t7154 + t6328*t6392*(t6879 + t7104 + t7105 - 1.*t6332*t7172*t7358 + t7424 + t7425) + t6332*t6392*(-1.*t6292*t6552*t7154 + t6328*t7172*t7358 + t7429 + t7430 + t7432 + t7434))*var2[5] + (t6332*t7254 + t6328*t7261 + t6332*(-1.*t6328*t6526 + t7105 - 1.*t6332*t7358 + t7424) + t6452*(t6526*t7154 + t6328*t7358 + t7429 + t7434))*var2[15];
  p_output1[53]=t6620*var2[0] + t6415*var2[1] + (t6273*t6335 + t6385*t6408)*var2[2] + (t6672*t7370 + t6620*(t6568*t7407 + t6422*t7411 + t7506) + t6568*(-1.*t6564*t7370 - 1.*t6571*t7378 - 1.*t6620*t7407 - 1.*t6408*t7411 + t7509 + t7512))*var2[3] + (t6857*t7374 + t6335*(t6292*t6392*t7358 - 1.*t6333*t6392*t7390 + t7506) + t6290*t6392*(-1.*t6556*t7368 - 1.*t6405*t7390 + t7488 + t7490 + t7509 + t7512))*var2[4] + (t6392*t7090*t7154 + t6292*(-1.*t6328*t6539 + t6292*t6552*t7154 - 1.*t6332*t7354 - 1.*t6328*t7172*t7358 + t7488 + t7490))*var2[5] - 0.068*t6328*var2[15] + (-0.325*t6326 - 1.*t6326*t6524 - 1.*t6326*t7344)*var2[16];
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

#include "dJh_RrFoot_DiagonalStance2.hh"

namespace SymFunction
{

void dJh_RrFoot_DiagonalStance2_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
