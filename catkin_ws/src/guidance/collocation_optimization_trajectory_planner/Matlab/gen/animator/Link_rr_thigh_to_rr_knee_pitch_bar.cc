/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:52:10 GMT+01:00
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
  double t453;
  double t461;
  double t466;
  double t488;
  double t192;
  double t368;
  double t401;
  double t402;
  double t403;
  double t405;
  double t495;
  double t499;
  double t271;
  double t522;
  double t535;
  double t487;
  double t516;
  double t568;
  double t553;
  double t554;
  double t555;
  double t581;
  double t584;
  double t585;
  double t501;
  double t587;
  double t490;
  double t635;
  double t546;
  double t593;
  double t539;
  double t423;
  double t448;
  double t450;
  double t451;
  double t472;
  double t491;
  double t494;
  double t503;
  double t507;
  double t512;
  double t518;
  double t519;
  double t521;
  double t523;
  double t525;
  double t526;
  double t541;
  double t545;
  double t547;
  double t548;
  double t550;
  double t560;
  double t566;
  double t567;
  double t569;
  double t571;
  double t576;
  double t577;
  double t580;
  double t586;
  double t588;
  double t589;
  double t600;
  double t608;
  double t609;
  double t614;
  double t615;
  double t616;
  double t623;
  double t625;
  double t633;
  double t639;
  double t641;
  double t649;
  double t650;
  double t655;
  double t662;
  double t663;
  double t666;
  double t670;
  double t671;
  double t673;
  double t679;
  double t680;
  double t618;
  double t658;
  double t681;
  double t682;
  double t853;
  double t858;
  double t857;
  double t859;
  double t860;
  double t862;
  double t864;
  double t865;
  double t875;
  double t876;
  double t884;
  double t886;
  double t890;
  double t891;
  double t854;
  double t861;
  double t866;
  double t885;
  double t892;
  double t896;
  double t900;
  double t901;
  double t905;
  double t907;
  double t908;
  double t909;
  double t910;
  double t922;
  double t923;
  double t924;
  double t925;
  double t906;
  double t914;
  double t926;
  double t927;
  double t1023;
  double t1024;
  double t1026;
  double t1029;
  double t1030;
  double t1031;
  double t1034;
  double t1036;
  double t1037;
  double t1039;
  double t1040;
  double t1041;
  double t1022;
  double t1028;
  double t1032;
  double t1038;
  double t1042;
  double t1043;
  double t1044;
  double t1045;
  double t1046;
  double t1048;
  double t1049;
  double t1050;
  double t1052;
  double t1054;
  double t1055;
  double t1056;
  double t1057;
  double t1047;
  double t1053;
  double t1058;
  double t1060;
  double t1148;
  double t1151;
  double t1153;
  double t1155;
  double t1285;
  double t1289;
  double t1290;
  double t1291;
  double t1399;
  double t1400;
  double t1401;
  double t1402;
  t453 = Cos(var1[16]);
  t461 = -1.*t453;
  t466 = 1. + t461;
  t488 = Sin(var1[16]);
  t192 = Cos(var1[4]);
  t368 = Cos(var1[15]);
  t401 = -1.*t368;
  t402 = 1. + t401;
  t403 = -0.15121*t402;
  t405 = Sin(var1[15]);
  t495 = -1. + t453;
  t499 = 4.e-6*t495;
  t271 = Cos(var1[5]);
  t522 = Sin(var1[5]);
  t535 = 7.e-6*t466;
  t487 = 2.8e-11*t466;
  t516 = Sin(var1[4]);
  t568 = -4.e-6*t488;
  t553 = -1.*t192*t271*t405;
  t554 = -1.*t368*t192*t522;
  t555 = t553 + t554;
  t581 = t368*t192*t271;
  t584 = -1.*t192*t405*t522;
  t585 = t581 + t584;
  t501 = -7.e-6*t488;
  t587 = -2.8e-11*t466;
  t490 = -1.*t488;
  t635 = 4.e-6*t466;
  t546 = 7.e-6*t488;
  t593 = -7.e-6*t466;
  t539 = 4.e-6*t488;
  t423 = -0.15121*t405;
  t448 = t403 + t423;
  t450 = t192*t271*t448;
  t451 = 1.5843479999999999e-12*var1[16];
  t472 = -0.03874900000889869*t466;
  t491 = t487 + t490;
  t494 = -0.281211000004*t491;
  t503 = t499 + t501;
  t507 = -1.8134809999999998e-6*t503;
  t512 = t451 + t472 + t494 + t507;
  t518 = t512*t516;
  t519 = 0.15121*t405;
  t521 = t403 + t519;
  t523 = -1.*t192*t521*t522;
  t525 = 3.9608699999999997e-7*var1[16];
  t526 = -1.1787626499999999e-16*t466;
  t541 = t535 + t539;
  t545 = -0.281211000004*t541;
  t547 = t499 + t546;
  t548 = -0.038749000006999997*t547;
  t550 = t525 + t526 + t545 + t548;
  t560 = t550*t555;
  t566 = -2.7726089999999997e-12*var1[16];
  t567 = -0.2812110000084994*t466;
  t569 = t535 + t568;
  t571 = -1.8134809999999998e-6*t569;
  t576 = t487 + t488;
  t577 = -0.038749000006999997*t576;
  t580 = t566 + t567 + t571 + t577;
  t586 = t580*t585;
  t588 = t587 + t488;
  t589 = t588*t516;
  t600 = t593 + t568;
  t608 = t600*t555;
  t609 = -1.000000000016*t466;
  t614 = 1. + t609;
  t615 = t614*t585;
  t616 = t589 + t608 + t615;
  t623 = -1.000000000049*t466;
  t625 = 1. + t623;
  t633 = t625*t516;
  t639 = t635 + t501;
  t641 = t639*t555;
  t649 = t587 + t490;
  t650 = t649*t585;
  t655 = t633 + t641 + t650;
  t662 = t635 + t546;
  t663 = t662*t516;
  t666 = -6.5e-11*t466;
  t670 = 1. + t666;
  t671 = t670*t555;
  t673 = t593 + t539;
  t679 = t673*t585;
  t680 = t663 + t671 + t679;
  t618 = -0.278672*t616;
  t658 = -0.027176*t655;
  t681 = -0.217513*t680;
  t682 = var1[0] + t450 + t518 + t523 + t560 + t586 + t618 + t658 + t681;
  t853 = Sin(var1[3]);
  t858 = Cos(var1[3]);
  t857 = t271*t853*t516;
  t859 = t858*t522;
  t860 = t857 + t859;
  t862 = t858*t271;
  t864 = -1.*t853*t516*t522;
  t865 = t862 + t864;
  t875 = -1.*t405*t860;
  t876 = t368*t865;
  t884 = t875 + t876;
  t886 = t368*t860;
  t890 = t405*t865;
  t891 = t886 + t890;
  t854 = -1.*t192*t512*t853;
  t861 = t448*t860;
  t866 = t521*t865;
  t885 = t550*t884;
  t892 = t580*t891;
  t896 = -1.*t192*t588*t853;
  t900 = t600*t884;
  t901 = t614*t891;
  t905 = t896 + t900 + t901;
  t907 = -1.*t625*t192*t853;
  t908 = t639*t884;
  t909 = t649*t891;
  t910 = t907 + t908 + t909;
  t922 = -1.*t192*t662*t853;
  t923 = t670*t884;
  t924 = t673*t891;
  t925 = t922 + t923 + t924;
  t906 = -0.278672*t905;
  t914 = -0.027176*t910;
  t926 = -0.217513*t925;
  t927 = var1[1] + t854 + t861 + t866 + t885 + t892 + t906 + t914 + t926;
  t1023 = -1.*t858*t271*t516;
  t1024 = t853*t522;
  t1026 = t1023 + t1024;
  t1029 = t271*t853;
  t1030 = t858*t516*t522;
  t1031 = t1029 + t1030;
  t1034 = -1.*t405*t1026;
  t1036 = t368*t1031;
  t1037 = t1034 + t1036;
  t1039 = t368*t1026;
  t1040 = t405*t1031;
  t1041 = t1039 + t1040;
  t1022 = t858*t192*t512;
  t1028 = t448*t1026;
  t1032 = t521*t1031;
  t1038 = t550*t1037;
  t1042 = t580*t1041;
  t1043 = t858*t192*t588;
  t1044 = t600*t1037;
  t1045 = t614*t1041;
  t1046 = t1043 + t1044 + t1045;
  t1048 = t625*t858*t192;
  t1049 = t639*t1037;
  t1050 = t649*t1041;
  t1052 = t1048 + t1049 + t1050;
  t1054 = t858*t192*t662;
  t1055 = t670*t1037;
  t1056 = t673*t1041;
  t1057 = t1054 + t1055 + t1056;
  t1047 = -0.278672*t1046;
  t1053 = -0.027176*t1052;
  t1058 = -0.217513*t1057;
  t1060 = var1[2] + t1022 + t1028 + t1032 + t1038 + t1042 + t1047 + t1053 + t1058;
  t1148 = -0.500613*t616;
  t1151 = -0.027002*t655;
  t1153 = -0.156515*t680;
  t1155 = var1[0] + t450 + t518 + t523 + t560 + t586 + t1148 + t1151 + t1153;
  t1285 = -0.500613*t905;
  t1289 = -0.027002*t910;
  t1290 = -0.156515*t925;
  t1291 = var1[1] + t854 + t861 + t866 + t885 + t892 + t1285 + t1289 + t1290;
  t1399 = -0.500613*t1046;
  t1400 = -0.027002*t1052;
  t1401 = -0.156515*t1057;
  t1402 = var1[2] + t1022 + t1028 + t1032 + t1038 + t1042 + t1399 + t1400 + t1401;
  p_output1[0]=t682;
  p_output1[1]=t450 + t518 + t523 + t560 + t586 - 0.277816*t616 - 0.030901*t655 - 0.214387*t680 + var1[0];
  p_output1[2]=t450 + t518 + t523 + t560 + t586 - 0.277328*t616 - 0.035477*t655 - 0.212596*t680 + var1[0];
  p_output1[3]=t450 + t518 + t523 + t560 + t586 - 0.27726*t616 - 0.040407*t655 - 0.212335*t680 + var1[0];
  p_output1[4]=t450 + t518 + t523 + t560 + t586 - 0.27762*t616 - 0.045158*t655 - 0.213632*t680 + var1[0];
  p_output1[5]=t450 + t518 + t523 + t560 + t586 - 0.278369*t616 - 0.049215*t655 - 0.216346*t680 + var1[0];
  p_output1[6]=t450 + t518 + t523 + t560 + t586 - 0.279426*t616 - 0.052137*t655 - 0.220183*t680 + var1[0];
  p_output1[7]=t450 + t518 + t523 + t560 + t586 - 0.280676*t616 - 0.053609*t655 - 0.224728*t680 + var1[0];
  p_output1[8]=t450 + t518 + t523 + t560 + t586 - 0.281984*t616 - 0.05347*t655 - 0.229487*t680 + var1[0];
  p_output1[9]=t450 + t518 + t523 + t560 + t586 - 0.283208*t616 - 0.051737*t655 - 0.233946*t680 + var1[0];
  p_output1[10]=t450 + t518 + t523 + t560 + t586 - 0.284216*t616 - 0.048596*t655 - 0.237621*t680 + var1[0];
  p_output1[11]=t450 + t518 + t523 + t560 + t586 - 0.284897*t616 - 0.044388*t655 - 0.240113*t680 + var1[0];
  p_output1[12]=t450 + t518 + t523 + t560 + t586 - 0.285179*t616 - 0.039569*t655 - 0.241153*t680 + var1[0];
  p_output1[13]=t450 + t518 + t523 + t560 + t586 - 0.285031*t616 - 0.034662*t655 - 0.240628*t680 + var1[0];
  p_output1[14]=t450 + t518 + t523 + t560 + t586 - 0.284469*t616 - 0.030197*t655 - 0.238595*t680 + var1[0];
  p_output1[15]=t450 + t518 + t523 + t560 + t586 - 0.283553*t616 - 0.026659*t655 - 0.235274*t680 + var1[0];
  p_output1[16]=t450 + t518 + t523 + t560 + t586 - 0.282384*t616 - 0.024432*t655 - 0.231025*t680 + var1[0];
  p_output1[17]=t450 + t518 + t523 + t560 + t586 - 0.281087*t616 - 0.023756*t655 - 0.226309*t680 + var1[0];
  p_output1[18]=t450 + t518 + t523 + t560 + t586 - 0.279804*t616 - 0.024705*t655 - 0.221636*t680 + var1[0];
  p_output1[19]=t682;
  p_output1[20]=t927;
  p_output1[21]=t854 + t861 + t866 + t885 + t892 - 0.277816*t905 - 0.030901*t910 - 0.214387*t925 + var1[1];
  p_output1[22]=t854 + t861 + t866 + t885 + t892 - 0.277328*t905 - 0.035477*t910 - 0.212596*t925 + var1[1];
  p_output1[23]=t854 + t861 + t866 + t885 + t892 - 0.27726*t905 - 0.040407*t910 - 0.212335*t925 + var1[1];
  p_output1[24]=t854 + t861 + t866 + t885 + t892 - 0.27762*t905 - 0.045158*t910 - 0.213632*t925 + var1[1];
  p_output1[25]=t854 + t861 + t866 + t885 + t892 - 0.278369*t905 - 0.049215*t910 - 0.216346*t925 + var1[1];
  p_output1[26]=t854 + t861 + t866 + t885 + t892 - 0.279426*t905 - 0.052137*t910 - 0.220183*t925 + var1[1];
  p_output1[27]=t854 + t861 + t866 + t885 + t892 - 0.280676*t905 - 0.053609*t910 - 0.224728*t925 + var1[1];
  p_output1[28]=t854 + t861 + t866 + t885 + t892 - 0.281984*t905 - 0.05347*t910 - 0.229487*t925 + var1[1];
  p_output1[29]=t854 + t861 + t866 + t885 + t892 - 0.283208*t905 - 0.051737*t910 - 0.233946*t925 + var1[1];
  p_output1[30]=t854 + t861 + t866 + t885 + t892 - 0.284216*t905 - 0.048596*t910 - 0.237621*t925 + var1[1];
  p_output1[31]=t854 + t861 + t866 + t885 + t892 - 0.284897*t905 - 0.044388*t910 - 0.240113*t925 + var1[1];
  p_output1[32]=t854 + t861 + t866 + t885 + t892 - 0.285179*t905 - 0.039569*t910 - 0.241153*t925 + var1[1];
  p_output1[33]=t854 + t861 + t866 + t885 + t892 - 0.285031*t905 - 0.034662*t910 - 0.240628*t925 + var1[1];
  p_output1[34]=t854 + t861 + t866 + t885 + t892 - 0.284469*t905 - 0.030197*t910 - 0.238595*t925 + var1[1];
  p_output1[35]=t854 + t861 + t866 + t885 + t892 - 0.283553*t905 - 0.026659*t910 - 0.235274*t925 + var1[1];
  p_output1[36]=t854 + t861 + t866 + t885 + t892 - 0.282384*t905 - 0.024432*t910 - 0.231025*t925 + var1[1];
  p_output1[37]=t854 + t861 + t866 + t885 + t892 - 0.281087*t905 - 0.023756*t910 - 0.226309*t925 + var1[1];
  p_output1[38]=t854 + t861 + t866 + t885 + t892 - 0.279804*t905 - 0.024705*t910 - 0.221636*t925 + var1[1];
  p_output1[39]=t927;
  p_output1[40]=t1060;
  p_output1[41]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.277816*t1046 - 0.030901*t1052 - 0.214387*t1057 + var1[2];
  p_output1[42]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.277328*t1046 - 0.035477*t1052 - 0.212596*t1057 + var1[2];
  p_output1[43]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.27726*t1046 - 0.040407*t1052 - 0.212335*t1057 + var1[2];
  p_output1[44]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.27762*t1046 - 0.045158*t1052 - 0.213632*t1057 + var1[2];
  p_output1[45]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.278369*t1046 - 0.049215*t1052 - 0.216346*t1057 + var1[2];
  p_output1[46]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.279426*t1046 - 0.052137*t1052 - 0.220183*t1057 + var1[2];
  p_output1[47]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.280676*t1046 - 0.053609*t1052 - 0.224728*t1057 + var1[2];
  p_output1[48]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.281984*t1046 - 0.05347*t1052 - 0.229487*t1057 + var1[2];
  p_output1[49]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.283208*t1046 - 0.051737*t1052 - 0.233946*t1057 + var1[2];
  p_output1[50]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.284216*t1046 - 0.048596*t1052 - 0.237621*t1057 + var1[2];
  p_output1[51]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.284897*t1046 - 0.044388*t1052 - 0.240113*t1057 + var1[2];
  p_output1[52]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.285179*t1046 - 0.039569*t1052 - 0.241153*t1057 + var1[2];
  p_output1[53]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.285031*t1046 - 0.034662*t1052 - 0.240628*t1057 + var1[2];
  p_output1[54]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.284469*t1046 - 0.030197*t1052 - 0.238595*t1057 + var1[2];
  p_output1[55]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.283553*t1046 - 0.026659*t1052 - 0.235274*t1057 + var1[2];
  p_output1[56]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.282384*t1046 - 0.024432*t1052 - 0.231025*t1057 + var1[2];
  p_output1[57]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.281087*t1046 - 0.023756*t1052 - 0.226309*t1057 + var1[2];
  p_output1[58]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.279804*t1046 - 0.024705*t1052 - 0.221636*t1057 + var1[2];
  p_output1[59]=t1060;
  p_output1[60]=t1155;
  p_output1[61]=t450 + t518 + t523 + t560 + t586 - 0.499757*t616 - 0.030727*t655 - 0.153389*t680 + var1[0];
  p_output1[62]=t450 + t518 + t523 + t560 + t586 - 0.499268*t616 - 0.035302*t655 - 0.151598*t680 + var1[0];
  p_output1[63]=t450 + t518 + t523 + t560 + t586 - 0.4992*t616 - 0.040233*t655 - 0.151337*t680 + var1[0];
  p_output1[64]=t450 + t518 + t523 + t560 + t586 - 0.49956*t616 - 0.044984*t655 - 0.152634*t680 + var1[0];
  p_output1[65]=t450 + t518 + t523 + t560 + t586 - 0.500309*t616 - 0.04904*t655 - 0.155348*t680 + var1[0];
  p_output1[66]=t450 + t518 + t523 + t560 + t586 - 0.501366*t616 - 0.051963*t655 - 0.159185*t680 + var1[0];
  p_output1[67]=t450 + t518 + t523 + t560 + t586 - 0.502617*t616 - 0.053435*t655 - 0.16373*t680 + var1[0];
  p_output1[68]=t450 + t518 + t523 + t560 + t586 - 0.503925*t616 - 0.053296*t655 - 0.168489*t680 + var1[0];
  p_output1[69]=t450 + t518 + t523 + t560 + t586 - 0.505149*t616 - 0.051563*t655 - 0.172948*t680 + var1[0];
  p_output1[70]=t450 + t518 + t523 + t560 + t586 - 0.506156*t616 - 0.048422*t655 - 0.176622*t680 + var1[0];
  p_output1[71]=t450 + t518 + t523 + t560 + t586 - 0.506838*t616 - 0.044214*t655 - 0.179114*t680 + var1[0];
  p_output1[72]=t450 + t518 + t523 + t560 + t586 - 0.50712*t616 - 0.039395*t655 - 0.180154*t680 + var1[0];
  p_output1[73]=t450 + t518 + t523 + t560 + t586 - 0.506972*t616 - 0.034487*t655 - 0.179629*t680 + var1[0];
  p_output1[74]=t450 + t518 + t523 + t560 + t586 - 0.506409*t616 - 0.030023*t655 - 0.177596*t680 + var1[0];
  p_output1[75]=t450 + t518 + t523 + t560 + t586 - 0.505494*t616 - 0.026485*t655 - 0.174275*t680 + var1[0];
  p_output1[76]=t450 + t518 + t523 + t560 + t586 - 0.504324*t616 - 0.024258*t655 - 0.170026*t680 + var1[0];
  p_output1[77]=t450 + t518 + t523 + t560 + t586 - 0.503028*t616 - 0.023582*t655 - 0.16531*t680 + var1[0];
  p_output1[78]=t450 + t518 + t523 + t560 + t586 - 0.501744*t616 - 0.024531*t655 - 0.160637*t680 + var1[0];
  p_output1[79]=t1155;
  p_output1[80]=t1291;
  p_output1[81]=t854 + t861 + t866 + t885 + t892 - 0.499757*t905 - 0.030727*t910 - 0.153389*t925 + var1[1];
  p_output1[82]=t854 + t861 + t866 + t885 + t892 - 0.499268*t905 - 0.035302*t910 - 0.151598*t925 + var1[1];
  p_output1[83]=t854 + t861 + t866 + t885 + t892 - 0.4992*t905 - 0.040233*t910 - 0.151337*t925 + var1[1];
  p_output1[84]=t854 + t861 + t866 + t885 + t892 - 0.49956*t905 - 0.044984*t910 - 0.152634*t925 + var1[1];
  p_output1[85]=t854 + t861 + t866 + t885 + t892 - 0.500309*t905 - 0.04904*t910 - 0.155348*t925 + var1[1];
  p_output1[86]=t854 + t861 + t866 + t885 + t892 - 0.501366*t905 - 0.051963*t910 - 0.159185*t925 + var1[1];
  p_output1[87]=t854 + t861 + t866 + t885 + t892 - 0.502617*t905 - 0.053435*t910 - 0.16373*t925 + var1[1];
  p_output1[88]=t854 + t861 + t866 + t885 + t892 - 0.503925*t905 - 0.053296*t910 - 0.168489*t925 + var1[1];
  p_output1[89]=t854 + t861 + t866 + t885 + t892 - 0.505149*t905 - 0.051563*t910 - 0.172948*t925 + var1[1];
  p_output1[90]=t854 + t861 + t866 + t885 + t892 - 0.506156*t905 - 0.048422*t910 - 0.176622*t925 + var1[1];
  p_output1[91]=t854 + t861 + t866 + t885 + t892 - 0.506838*t905 - 0.044214*t910 - 0.179114*t925 + var1[1];
  p_output1[92]=t854 + t861 + t866 + t885 + t892 - 0.50712*t905 - 0.039395*t910 - 0.180154*t925 + var1[1];
  p_output1[93]=t854 + t861 + t866 + t885 + t892 - 0.506972*t905 - 0.034487*t910 - 0.179629*t925 + var1[1];
  p_output1[94]=t854 + t861 + t866 + t885 + t892 - 0.506409*t905 - 0.030023*t910 - 0.177596*t925 + var1[1];
  p_output1[95]=t854 + t861 + t866 + t885 + t892 - 0.505494*t905 - 0.026485*t910 - 0.174275*t925 + var1[1];
  p_output1[96]=t854 + t861 + t866 + t885 + t892 - 0.504324*t905 - 0.024258*t910 - 0.170026*t925 + var1[1];
  p_output1[97]=t854 + t861 + t866 + t885 + t892 - 0.503028*t905 - 0.023582*t910 - 0.16531*t925 + var1[1];
  p_output1[98]=t854 + t861 + t866 + t885 + t892 - 0.501744*t905 - 0.024531*t910 - 0.160637*t925 + var1[1];
  p_output1[99]=t1291;
  p_output1[100]=t1402;
  p_output1[101]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.499757*t1046 - 0.030727*t1052 - 0.153389*t1057 + var1[2];
  p_output1[102]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.499268*t1046 - 0.035302*t1052 - 0.151598*t1057 + var1[2];
  p_output1[103]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.4992*t1046 - 0.040233*t1052 - 0.151337*t1057 + var1[2];
  p_output1[104]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.49956*t1046 - 0.044984*t1052 - 0.152634*t1057 + var1[2];
  p_output1[105]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.500309*t1046 - 0.04904*t1052 - 0.155348*t1057 + var1[2];
  p_output1[106]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.501366*t1046 - 0.051963*t1052 - 0.159185*t1057 + var1[2];
  p_output1[107]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.502617*t1046 - 0.053435*t1052 - 0.16373*t1057 + var1[2];
  p_output1[108]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.503925*t1046 - 0.053296*t1052 - 0.168489*t1057 + var1[2];
  p_output1[109]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.505149*t1046 - 0.051563*t1052 - 0.172948*t1057 + var1[2];
  p_output1[110]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.506156*t1046 - 0.048422*t1052 - 0.176622*t1057 + var1[2];
  p_output1[111]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.506838*t1046 - 0.044214*t1052 - 0.179114*t1057 + var1[2];
  p_output1[112]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.50712*t1046 - 0.039395*t1052 - 0.180154*t1057 + var1[2];
  p_output1[113]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.506972*t1046 - 0.034487*t1052 - 0.179629*t1057 + var1[2];
  p_output1[114]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.506409*t1046 - 0.030023*t1052 - 0.177596*t1057 + var1[2];
  p_output1[115]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.505494*t1046 - 0.026485*t1052 - 0.174275*t1057 + var1[2];
  p_output1[116]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.504324*t1046 - 0.024258*t1052 - 0.170026*t1057 + var1[2];
  p_output1[117]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.503028*t1046 - 0.023582*t1052 - 0.16531*t1057 + var1[2];
  p_output1[118]=t1022 + t1028 + t1032 + t1038 + t1042 - 0.501744*t1046 - 0.024531*t1052 - 0.160637*t1057 + var1[2];
  p_output1[119]=t1402;
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

#include "Link_rr_thigh_to_rr_knee_pitch_bar.hh"

namespace SymFunction
{

void Link_rr_thigh_to_rr_knee_pitch_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
