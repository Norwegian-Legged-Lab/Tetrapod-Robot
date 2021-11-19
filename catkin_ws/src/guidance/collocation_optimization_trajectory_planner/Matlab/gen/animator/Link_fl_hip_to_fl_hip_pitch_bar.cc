/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:21 GMT+01:00
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
  double t239;
  double t248;
  double t250;
  double t254;
  double t259;
  double t265;
  double t247;
  double t390;
  double t186;
  double t267;
  double t327;
  double t364;
  double t391;
  double t407;
  double t408;
  double t410;
  double t411;
  double t413;
  double t432;
  double t435;
  double t443;
  double t233;
  double t416;
  double t464;
  double t465;
  double t941;
  double t954;
  double t968;
  double t969;
  double t973;
  double t983;
  double t987;
  double t1020;
  double t982;
  double t1029;
  double t1030;
  double t1031;
  double t1036;
  double t1041;
  double t1046;
  double t1050;
  double t946;
  double t1037;
  double t1059;
  double t1063;
  double t1430;
  double t1431;
  double t1438;
  double t1456;
  double t1459;
  double t1464;
  double t1453;
  double t1467;
  double t1474;
  double t1475;
  double t1476;
  double t1483;
  double t1484;
  double t1485;
  double t1424;
  double t1481;
  double t1487;
  double t1491;
  double t1818;
  double t1825;
  double t1826;
  double t1835;
  double t2221;
  double t2224;
  double t2225;
  double t2227;
  double t2523;
  double t2525;
  double t2538;
  double t2551;
  t239 = Cos(var1[4]);
  t248 = Cos(var1[6]);
  t250 = -1.*t248;
  t254 = 1. + t250;
  t259 = 0.15121*t254;
  t265 = Sin(var1[6]);
  t247 = Sin(var1[5]);
  t390 = Cos(var1[5]);
  t186 = Sin(var1[4]);
  t267 = -0.15121*t265;
  t327 = t259 + t267;
  t364 = -1.*t239*t247*t327;
  t391 = 0.15121*t265;
  t407 = t259 + t391;
  t408 = t239*t390*t407;
  t410 = -1.*t239*t248*t247;
  t411 = -1.*t239*t390*t265;
  t413 = t410 + t411;
  t432 = t239*t390*t248;
  t435 = -1.*t239*t247*t265;
  t443 = t432 + t435;
  t233 = 0.014273*t186;
  t416 = 0.155466*t413;
  t464 = 0.152993*t443;
  t465 = var1[0] + t233 + t364 + t408 + t416 + t464;
  t941 = Sin(var1[3]);
  t954 = Cos(var1[3]);
  t968 = t954*t390;
  t969 = -1.*t941*t186*t247;
  t973 = t968 + t969;
  t983 = t390*t941*t186;
  t987 = t954*t247;
  t1020 = t983 + t987;
  t982 = t973*t327;
  t1029 = t1020*t407;
  t1030 = t248*t973;
  t1031 = -1.*t1020*t265;
  t1036 = t1030 + t1031;
  t1041 = t248*t1020;
  t1046 = t973*t265;
  t1050 = t1041 + t1046;
  t946 = -0.014273*t239*t941;
  t1037 = 0.155466*t1036;
  t1059 = 0.152993*t1050;
  t1063 = var1[1] + t946 + t982 + t1029 + t1037 + t1059;
  t1430 = t390*t941;
  t1431 = t954*t186*t247;
  t1438 = t1430 + t1431;
  t1456 = -1.*t954*t390*t186;
  t1459 = t941*t247;
  t1464 = t1456 + t1459;
  t1453 = t1438*t327;
  t1467 = t1464*t407;
  t1474 = t248*t1438;
  t1475 = -1.*t1464*t265;
  t1476 = t1474 + t1475;
  t1483 = t248*t1464;
  t1484 = t1438*t265;
  t1485 = t1483 + t1484;
  t1424 = 0.014273*t954*t239;
  t1481 = 0.155466*t1476;
  t1487 = 0.152993*t1485;
  t1491 = var1[2] + t1424 + t1453 + t1467 + t1481 + t1487;
  t1818 = -0.024477*t186;
  t1825 = 0.230966*t413;
  t1826 = 0.282993*t443;
  t1835 = var1[0] + t1818 + t364 + t408 + t1825 + t1826;
  t2221 = 0.024477*t239*t941;
  t2224 = 0.230966*t1036;
  t2225 = 0.282993*t1050;
  t2227 = var1[1] + t2221 + t982 + t1029 + t2224 + t2225;
  t2523 = -0.024477*t954*t239;
  t2525 = 0.230966*t1476;
  t2538 = 0.282993*t1485;
  t2551 = var1[2] + t2523 + t1453 + t1467 + t2525 + t2538;
  p_output1[0]=t465;
  p_output1[1]=0.014375*t186 + t364 + t408 + 0.15121*t413 + 0.155495*t443 + var1[0];
  p_output1[2]=0.01292*t186 + t364 + t408 + 0.146954*t413 + 0.157533*t443 + var1[0];
  p_output1[3]=0.010064*t186 + t364 + t408 + 0.14316*t413 + 0.158885*t443 + var1[0];
  p_output1[4]=0.006118*t186 + t364 + t408 + 0.140238*t413 + 0.159406*t443 + var1[0];
  p_output1[5]=0.001509*t186 + t364 + t408 + 0.138504*t413 + 0.159039*t443 + var1[0];
  p_output1[6]=-0.003264*t186 + t364 + t408 + 0.138148*t413 + 0.157823*t443 + var1[0];
  p_output1[7]=-0.007683*t186 + t364 + t408 + 0.139207*t413 + 0.155891*t443 + var1[0];
  p_output1[8]=-0.011269*t186 + t364 + t408 + 0.141567*t413 + 0.153451*t443 + var1[0];
  p_output1[9]=-0.013634*t186 + t364 + t408 + 0.144972*t413 + 0.150769*t443 + var1[0];
  p_output1[10]=-0.014522*t186 + t364 + t408 + 0.149053*t413 + 0.148134*t443 + var1[0];
  p_output1[11]=-0.013836*t186 + t364 + t408 + 0.153367*t413 + 0.145833*t443 + var1[0];
  p_output1[12]=-0.011651*t186 + t364 + t408 + 0.157448*t413 + 0.144114*t443 + var1[0];
  p_output1[13]=-0.008203*t186 + t364 + t408 + 0.160853*t413 + 0.143165*t443 + var1[0];
  p_output1[14]=-0.003866*t186 + t364 + t408 + 0.163213*t413 + 0.143087*t443 + var1[0];
  p_output1[15]=0.000889*t186 + t364 + t408 + 0.164272*t413 + 0.143889*t443 + var1[0];
  p_output1[16]=0.005549*t186 + t364 + t408 + 0.163916*t413 + 0.145485*t443 + var1[0];
  p_output1[17]=0.009607*t186 + t364 + t408 + 0.162183*t413 + 0.147701*t443 + var1[0];
  p_output1[18]=0.012624*t186 + t364 + t408 + 0.15926*t413 + 0.150297*t443 + var1[0];
  p_output1[19]=t465;
  p_output1[20]=t1063;
  p_output1[21]=t1029 + 0.15121*t1036 + 0.155495*t1050 - 0.014375*t239*t941 + t982 + var1[1];
  p_output1[22]=t1029 + 0.146954*t1036 + 0.157533*t1050 - 0.01292*t239*t941 + t982 + var1[1];
  p_output1[23]=t1029 + 0.14316*t1036 + 0.158885*t1050 - 0.010064*t239*t941 + t982 + var1[1];
  p_output1[24]=t1029 + 0.140238*t1036 + 0.159406*t1050 - 0.006118*t239*t941 + t982 + var1[1];
  p_output1[25]=t1029 + 0.138504*t1036 + 0.159039*t1050 - 0.001509*t239*t941 + t982 + var1[1];
  p_output1[26]=t1029 + 0.138148*t1036 + 0.157823*t1050 + 0.003264*t239*t941 + t982 + var1[1];
  p_output1[27]=t1029 + 0.139207*t1036 + 0.155891*t1050 + 0.007683*t239*t941 + t982 + var1[1];
  p_output1[28]=t1029 + 0.141567*t1036 + 0.153451*t1050 + 0.011269*t239*t941 + t982 + var1[1];
  p_output1[29]=t1029 + 0.144972*t1036 + 0.150769*t1050 + 0.013634*t239*t941 + t982 + var1[1];
  p_output1[30]=t1029 + 0.149053*t1036 + 0.148134*t1050 + 0.014522*t239*t941 + t982 + var1[1];
  p_output1[31]=t1029 + 0.153367*t1036 + 0.145833*t1050 + 0.013836*t239*t941 + t982 + var1[1];
  p_output1[32]=t1029 + 0.157448*t1036 + 0.144114*t1050 + 0.011651*t239*t941 + t982 + var1[1];
  p_output1[33]=t1029 + 0.160853*t1036 + 0.143165*t1050 + 0.008203*t239*t941 + t982 + var1[1];
  p_output1[34]=t1029 + 0.163213*t1036 + 0.143087*t1050 + 0.003866*t239*t941 + t982 + var1[1];
  p_output1[35]=t1029 + 0.164272*t1036 + 0.143889*t1050 - 0.000889*t239*t941 + t982 + var1[1];
  p_output1[36]=t1029 + 0.163916*t1036 + 0.145485*t1050 - 0.005549*t239*t941 + t982 + var1[1];
  p_output1[37]=t1029 + 0.162183*t1036 + 0.147701*t1050 - 0.009607*t239*t941 + t982 + var1[1];
  p_output1[38]=t1029 + 0.15926*t1036 + 0.150297*t1050 - 0.012624*t239*t941 + t982 + var1[1];
  p_output1[39]=t1063;
  p_output1[40]=t1491;
  p_output1[41]=t1453 + t1467 + 0.15121*t1476 + 0.155495*t1485 + 0.014375*t239*t954 + var1[2];
  p_output1[42]=t1453 + t1467 + 0.146954*t1476 + 0.157533*t1485 + 0.01292*t239*t954 + var1[2];
  p_output1[43]=t1453 + t1467 + 0.14316*t1476 + 0.158885*t1485 + 0.010064*t239*t954 + var1[2];
  p_output1[44]=t1453 + t1467 + 0.140238*t1476 + 0.159406*t1485 + 0.006118*t239*t954 + var1[2];
  p_output1[45]=t1453 + t1467 + 0.138504*t1476 + 0.159039*t1485 + 0.001509*t239*t954 + var1[2];
  p_output1[46]=t1453 + t1467 + 0.138148*t1476 + 0.157823*t1485 - 0.003264*t239*t954 + var1[2];
  p_output1[47]=t1453 + t1467 + 0.139207*t1476 + 0.155891*t1485 - 0.007683*t239*t954 + var1[2];
  p_output1[48]=t1453 + t1467 + 0.141567*t1476 + 0.153451*t1485 - 0.011269*t239*t954 + var1[2];
  p_output1[49]=t1453 + t1467 + 0.144972*t1476 + 0.150769*t1485 - 0.013634*t239*t954 + var1[2];
  p_output1[50]=t1453 + t1467 + 0.149053*t1476 + 0.148134*t1485 - 0.014522*t239*t954 + var1[2];
  p_output1[51]=t1453 + t1467 + 0.153367*t1476 + 0.145833*t1485 - 0.013836*t239*t954 + var1[2];
  p_output1[52]=t1453 + t1467 + 0.157448*t1476 + 0.144114*t1485 - 0.011651*t239*t954 + var1[2];
  p_output1[53]=t1453 + t1467 + 0.160853*t1476 + 0.143165*t1485 - 0.008203*t239*t954 + var1[2];
  p_output1[54]=t1453 + t1467 + 0.163213*t1476 + 0.143087*t1485 - 0.003866*t239*t954 + var1[2];
  p_output1[55]=t1453 + t1467 + 0.164272*t1476 + 0.143889*t1485 + 0.000889*t239*t954 + var1[2];
  p_output1[56]=t1453 + t1467 + 0.163916*t1476 + 0.145485*t1485 + 0.005549*t239*t954 + var1[2];
  p_output1[57]=t1453 + t1467 + 0.162183*t1476 + 0.147701*t1485 + 0.009607*t239*t954 + var1[2];
  p_output1[58]=t1453 + t1467 + 0.15926*t1476 + 0.150297*t1485 + 0.012624*t239*t954 + var1[2];
  p_output1[59]=t1491;
  p_output1[60]=t1835;
  p_output1[61]=-0.024375*t186 + t364 + t408 + 0.22671*t413 + 0.285495*t443 + var1[0];
  p_output1[62]=-0.02583*t186 + t364 + t408 + 0.222454*t413 + 0.287533*t443 + var1[0];
  p_output1[63]=-0.028686*t186 + t364 + t408 + 0.21866*t413 + 0.288885*t443 + var1[0];
  p_output1[64]=-0.032632*t186 + t364 + t408 + 0.215738*t413 + 0.289406*t443 + var1[0];
  p_output1[65]=-0.037241*t186 + t364 + t408 + 0.214004*t413 + 0.289039*t443 + var1[0];
  p_output1[66]=-0.042014*t186 + t364 + t408 + 0.213648*t413 + 0.287823*t443 + var1[0];
  p_output1[67]=-0.046433*t186 + t364 + t408 + 0.214707*t413 + 0.285891*t443 + var1[0];
  p_output1[68]=-0.050019*t186 + t364 + t408 + 0.217067*t413 + 0.283451*t443 + var1[0];
  p_output1[69]=-0.052384*t186 + t364 + t408 + 0.220472*t413 + 0.280769*t443 + var1[0];
  p_output1[70]=-0.053272*t186 + t364 + t408 + 0.224553*t413 + 0.278134*t443 + var1[0];
  p_output1[71]=-0.052586*t186 + t364 + t408 + 0.228867*t413 + 0.275833*t443 + var1[0];
  p_output1[72]=-0.050401*t186 + t364 + t408 + 0.232948*t413 + 0.274114*t443 + var1[0];
  p_output1[73]=-0.046953*t186 + t364 + t408 + 0.236353*t413 + 0.273165*t443 + var1[0];
  p_output1[74]=-0.042616*t186 + t364 + t408 + 0.238713*t413 + 0.273087*t443 + var1[0];
  p_output1[75]=-0.037861*t186 + t364 + t408 + 0.239772*t413 + 0.273889*t443 + var1[0];
  p_output1[76]=-0.033201*t186 + t364 + t408 + 0.239416*t413 + 0.275485*t443 + var1[0];
  p_output1[77]=-0.029143*t186 + t364 + t408 + 0.237683*t413 + 0.277701*t443 + var1[0];
  p_output1[78]=-0.026126*t186 + t364 + t408 + 0.23476*t413 + 0.280297*t443 + var1[0];
  p_output1[79]=t1835;
  p_output1[80]=t2227;
  p_output1[81]=t1029 + 0.22671*t1036 + 0.285495*t1050 + 0.024375*t239*t941 + t982 + var1[1];
  p_output1[82]=t1029 + 0.222454*t1036 + 0.287533*t1050 + 0.02583*t239*t941 + t982 + var1[1];
  p_output1[83]=t1029 + 0.21866*t1036 + 0.288885*t1050 + 0.028686*t239*t941 + t982 + var1[1];
  p_output1[84]=t1029 + 0.215738*t1036 + 0.289406*t1050 + 0.032632*t239*t941 + t982 + var1[1];
  p_output1[85]=t1029 + 0.214004*t1036 + 0.289039*t1050 + 0.037241*t239*t941 + t982 + var1[1];
  p_output1[86]=t1029 + 0.213648*t1036 + 0.287823*t1050 + 0.042014*t239*t941 + t982 + var1[1];
  p_output1[87]=t1029 + 0.214707*t1036 + 0.285891*t1050 + 0.046433*t239*t941 + t982 + var1[1];
  p_output1[88]=t1029 + 0.217067*t1036 + 0.283451*t1050 + 0.050019*t239*t941 + t982 + var1[1];
  p_output1[89]=t1029 + 0.220472*t1036 + 0.280769*t1050 + 0.052384*t239*t941 + t982 + var1[1];
  p_output1[90]=t1029 + 0.224553*t1036 + 0.278134*t1050 + 0.053272*t239*t941 + t982 + var1[1];
  p_output1[91]=t1029 + 0.228867*t1036 + 0.275833*t1050 + 0.052586*t239*t941 + t982 + var1[1];
  p_output1[92]=t1029 + 0.232948*t1036 + 0.274114*t1050 + 0.050401*t239*t941 + t982 + var1[1];
  p_output1[93]=t1029 + 0.236353*t1036 + 0.273165*t1050 + 0.046953*t239*t941 + t982 + var1[1];
  p_output1[94]=t1029 + 0.238713*t1036 + 0.273087*t1050 + 0.042616*t239*t941 + t982 + var1[1];
  p_output1[95]=t1029 + 0.239772*t1036 + 0.273889*t1050 + 0.037861*t239*t941 + t982 + var1[1];
  p_output1[96]=t1029 + 0.239416*t1036 + 0.275485*t1050 + 0.033201*t239*t941 + t982 + var1[1];
  p_output1[97]=t1029 + 0.237683*t1036 + 0.277701*t1050 + 0.029143*t239*t941 + t982 + var1[1];
  p_output1[98]=t1029 + 0.23476*t1036 + 0.280297*t1050 + 0.026126*t239*t941 + t982 + var1[1];
  p_output1[99]=t2227;
  p_output1[100]=t2551;
  p_output1[101]=t1453 + t1467 + 0.22671*t1476 + 0.285495*t1485 - 0.024375*t239*t954 + var1[2];
  p_output1[102]=t1453 + t1467 + 0.222454*t1476 + 0.287533*t1485 - 0.02583*t239*t954 + var1[2];
  p_output1[103]=t1453 + t1467 + 0.21866*t1476 + 0.288885*t1485 - 0.028686*t239*t954 + var1[2];
  p_output1[104]=t1453 + t1467 + 0.215738*t1476 + 0.289406*t1485 - 0.032632*t239*t954 + var1[2];
  p_output1[105]=t1453 + t1467 + 0.214004*t1476 + 0.289039*t1485 - 0.037241*t239*t954 + var1[2];
  p_output1[106]=t1453 + t1467 + 0.213648*t1476 + 0.287823*t1485 - 0.042014*t239*t954 + var1[2];
  p_output1[107]=t1453 + t1467 + 0.214707*t1476 + 0.285891*t1485 - 0.046433*t239*t954 + var1[2];
  p_output1[108]=t1453 + t1467 + 0.217067*t1476 + 0.283451*t1485 - 0.050019*t239*t954 + var1[2];
  p_output1[109]=t1453 + t1467 + 0.220472*t1476 + 0.280769*t1485 - 0.052384*t239*t954 + var1[2];
  p_output1[110]=t1453 + t1467 + 0.224553*t1476 + 0.278134*t1485 - 0.053272*t239*t954 + var1[2];
  p_output1[111]=t1453 + t1467 + 0.228867*t1476 + 0.275833*t1485 - 0.052586*t239*t954 + var1[2];
  p_output1[112]=t1453 + t1467 + 0.232948*t1476 + 0.274114*t1485 - 0.050401*t239*t954 + var1[2];
  p_output1[113]=t1453 + t1467 + 0.236353*t1476 + 0.273165*t1485 - 0.046953*t239*t954 + var1[2];
  p_output1[114]=t1453 + t1467 + 0.238713*t1476 + 0.273087*t1485 - 0.042616*t239*t954 + var1[2];
  p_output1[115]=t1453 + t1467 + 0.239772*t1476 + 0.273889*t1485 - 0.037861*t239*t954 + var1[2];
  p_output1[116]=t1453 + t1467 + 0.239416*t1476 + 0.275485*t1485 - 0.033201*t239*t954 + var1[2];
  p_output1[117]=t1453 + t1467 + 0.237683*t1476 + 0.277701*t1485 - 0.029143*t239*t954 + var1[2];
  p_output1[118]=t1453 + t1467 + 0.23476*t1476 + 0.280297*t1485 - 0.026126*t239*t954 + var1[2];
  p_output1[119]=t2551;
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

#include "Link_fl_hip_to_fl_hip_pitch_bar.hh"

namespace SymFunction
{

void Link_fl_hip_to_fl_hip_pitch_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
