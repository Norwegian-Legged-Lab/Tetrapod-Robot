/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:23 GMT+01:00
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
  double t618;
  double t784;
  double t788;
  double t794;
  double t822;
  double t823;
  double t783;
  double t877;
  double t962;
  double t968;
  double t973;
  double t1041;
  double t1080;
  double t1086;
  double t1093;
  double t1144;
  double t906;
  double t908;
  double t928;
  double t1209;
  double t824;
  double t827;
  double t865;
  double t891;
  double t899;
  double t902;
  double t935;
  double t983;
  double t1046;
  double t1056;
  double t1063;
  double t1112;
  double t1129;
  double t1131;
  double t1141;
  double t1146;
  double t1154;
  double t1156;
  double t1157;
  double t1158;
  double t1169;
  double t1179;
  double t1180;
  double t1189;
  double t1195;
  double t1196;
  double t1213;
  double t1227;
  double t1229;
  double t1230;
  double t1234;
  double t1238;
  double t1245;
  double t1247;
  double t1249;
  double t1254;
  double t1207;
  double t1240;
  double t1264;
  double t1269;
  double t1646;
  double t1644;
  double t1645;
  double t1647;
  double t1649;
  double t1659;
  double t1662;
  double t1664;
  double t1675;
  double t1677;
  double t1686;
  double t1667;
  double t1669;
  double t1670;
  double t1650;
  double t1665;
  double t1674;
  double t1697;
  double t1715;
  double t1716;
  double t1724;
  double t1726;
  double t1732;
  double t1739;
  double t1740;
  double t1758;
  double t1768;
  double t1773;
  double t1774;
  double t1777;
  double t1779;
  double t1736;
  double t1772;
  double t1780;
  double t1785;
  double t2112;
  double t2113;
  double t2127;
  double t2130;
  double t2131;
  double t2134;
  double t2167;
  double t2171;
  double t2182;
  double t2147;
  double t2159;
  double t2161;
  double t2128;
  double t2142;
  double t2166;
  double t2193;
  double t2207;
  double t2211;
  double t2215;
  double t2219;
  double t2225;
  double t2228;
  double t2231;
  double t2237;
  double t2238;
  double t2251;
  double t2252;
  double t2253;
  double t2257;
  double t2227;
  double t2241;
  double t2262;
  double t2271;
  double t1274;
  double t1299;
  double t1346;
  double t1375;
  double t1403;
  double t1416;
  double t1438;
  double t1517;
  double t1524;
  double t1583;
  double t1600;
  double t1611;
  double t1630;
  double t2562;
  double t2566;
  double t2570;
  double t1798;
  double t1819;
  double t1854;
  double t1875;
  double t1900;
  double t1945;
  double t1965;
  double t2018;
  double t2027;
  double t2075;
  double t2085;
  double t2094;
  double t2104;
  double t2761;
  double t2762;
  double t2766;
  double t2282;
  double t2292;
  double t2318;
  double t2329;
  double t2351;
  double t2368;
  double t2392;
  double t2416;
  double t2433;
  double t2470;
  double t2490;
  double t2538;
  double t2558;
  double t2945;
  double t2949;
  double t2951;
  t618 = Cos(var1[4]);
  t784 = Cos(var1[6]);
  t788 = -1.*t784;
  t794 = 1. + t788;
  t822 = 0.15121*t794;
  t823 = Sin(var1[6]);
  t783 = Sin(var1[5]);
  t877 = Cos(var1[5]);
  t962 = Cos(var1[7]);
  t968 = -1.*t962;
  t973 = 1. + t968;
  t1041 = Sin(var1[7]);
  t1080 = t618*t877*t784;
  t1086 = -1.*t618*t783*t823;
  t1093 = t1080 + t1086;
  t1144 = Sin(var1[4]);
  t906 = -1.*t618*t784*t783;
  t908 = -1.*t618*t877*t823;
  t928 = t906 + t908;
  t1209 = -1. + t962;
  t824 = -0.15121*t823;
  t827 = t822 + t824;
  t865 = -1.*t618*t783*t827;
  t891 = 0.15121*t823;
  t899 = t822 + t891;
  t902 = t618*t877*t899;
  t935 = -1.2484e-7*var1[7];
  t983 = -1.5499600000248e-7*t973;
  t1046 = 1.124840000016e-6*t1041;
  t1056 = t935 + t983 + t1046;
  t1063 = t928*t1056;
  t1112 = 0.281210000008499*t973;
  t1129 = 0.03874900000062*t1041;
  t1131 = t1112 + t1129;
  t1141 = t1093*t1131;
  t1146 = 4.9936e-13*var1[7];
  t1154 = -0.03874900000062*t973;
  t1156 = 0.281210000004*t1041;
  t1157 = t1146 + t1154 + t1156;
  t1158 = t1144*t1157;
  t1169 = -1.000000000016*t973;
  t1179 = 1. + t1169;
  t1180 = t1179*t1093;
  t1189 = -1.*t1144*t1041;
  t1195 = -4.e-6*t928*t1041;
  t1196 = t1180 + t1189 + t1195;
  t1213 = 4.e-6*t1209*t1144;
  t1227 = 1.6e-11*t1209;
  t1229 = 1. + t1227;
  t1230 = t1229*t928;
  t1234 = 4.e-6*t1093*t1041;
  t1238 = t1213 + t1230 + t1234;
  t1245 = t962*t1144;
  t1247 = 4.e-6*t1209*t928;
  t1249 = t1093*t1041;
  t1254 = t1245 + t1247 + t1249;
  t1207 = 0.278442*t1196;
  t1240 = 0.216636*t1238;
  t1264 = -0.027986*t1254;
  t1269 = var1[0] + t865 + t902 + t1063 + t1141 + t1158 + t1207 + t1240 + t1264;
  t1646 = Sin(var1[3]);
  t1644 = Cos(var1[3]);
  t1645 = t1644*t877;
  t1647 = -1.*t1646*t1144*t783;
  t1649 = t1645 + t1647;
  t1659 = t877*t1646*t1144;
  t1662 = t1644*t783;
  t1664 = t1659 + t1662;
  t1675 = t784*t1664;
  t1677 = t1649*t823;
  t1686 = t1675 + t1677;
  t1667 = t784*t1649;
  t1669 = -1.*t1664*t823;
  t1670 = t1667 + t1669;
  t1650 = t1649*t827;
  t1665 = t1664*t899;
  t1674 = t1670*t1056;
  t1697 = t1686*t1131;
  t1715 = -1.*t618*t1646*t1157;
  t1716 = t1179*t1686;
  t1724 = t618*t1646*t1041;
  t1726 = -4.e-6*t1670*t1041;
  t1732 = t1716 + t1724 + t1726;
  t1739 = -4.e-6*t618*t1209*t1646;
  t1740 = t1229*t1670;
  t1758 = 4.e-6*t1686*t1041;
  t1768 = t1739 + t1740 + t1758;
  t1773 = -1.*t618*t962*t1646;
  t1774 = 4.e-6*t1209*t1670;
  t1777 = t1686*t1041;
  t1779 = t1773 + t1774 + t1777;
  t1736 = 0.278442*t1732;
  t1772 = 0.216636*t1768;
  t1780 = -0.027986*t1779;
  t1785 = var1[1] + t1650 + t1665 + t1674 + t1697 + t1715 + t1736 + t1772 + t1780;
  t2112 = t877*t1646;
  t2113 = t1644*t1144*t783;
  t2127 = t2112 + t2113;
  t2130 = -1.*t1644*t877*t1144;
  t2131 = t1646*t783;
  t2134 = t2130 + t2131;
  t2167 = t784*t2134;
  t2171 = t2127*t823;
  t2182 = t2167 + t2171;
  t2147 = t784*t2127;
  t2159 = -1.*t2134*t823;
  t2161 = t2147 + t2159;
  t2128 = t2127*t827;
  t2142 = t2134*t899;
  t2166 = t2161*t1056;
  t2193 = t2182*t1131;
  t2207 = t1644*t618*t1157;
  t2211 = t1179*t2182;
  t2215 = -1.*t1644*t618*t1041;
  t2219 = -4.e-6*t2161*t1041;
  t2225 = t2211 + t2215 + t2219;
  t2228 = 4.e-6*t1644*t618*t1209;
  t2231 = t1229*t2161;
  t2237 = 4.e-6*t2182*t1041;
  t2238 = t2228 + t2231 + t2237;
  t2251 = t1644*t618*t962;
  t2252 = 4.e-6*t1209*t2161;
  t2253 = t2182*t1041;
  t2257 = t2251 + t2252 + t2253;
  t2227 = 0.278442*t2225;
  t2241 = 0.216636*t2238;
  t2262 = -0.027986*t2257;
  t2271 = var1[2] + t2128 + t2142 + t2166 + t2193 + t2207 + t2227 + t2241 + t2262;
  t1274 = -0.031961*t1254;
  t1299 = -0.036672*t1254;
  t1346 = -0.046235*t1254;
  t1375 = -0.05005*t1254;
  t1403 = -0.052641*t1254;
  t1416 = -0.053726*t1254;
  t1438 = -0.053189*t1254;
  t1517 = -0.043244*t1254;
  t1524 = -0.038354*t1254;
  t1583 = -0.02598*t1254;
  t1600 = -0.024117*t1254;
  t1611 = -0.023839*t1254;
  t1630 = -0.025177*t1254;
  t2562 = 0.500442*t1196;
  t2566 = 0.155636*t1238;
  t2570 = var1[0] + t865 + t902 + t1063 + t1141 + t1158 + t2562 + t2566 + t1264;
  t1798 = -0.031961*t1779;
  t1819 = -0.036672*t1779;
  t1854 = -0.046235*t1779;
  t1875 = -0.05005*t1779;
  t1900 = -0.052641*t1779;
  t1945 = -0.053726*t1779;
  t1965 = -0.053189*t1779;
  t2018 = -0.043244*t1779;
  t2027 = -0.038354*t1779;
  t2075 = -0.02598*t1779;
  t2085 = -0.024117*t1779;
  t2094 = -0.023839*t1779;
  t2104 = -0.025177*t1779;
  t2761 = 0.500442*t1732;
  t2762 = 0.155636*t1768;
  t2766 = var1[1] + t1650 + t1665 + t1674 + t1697 + t1715 + t2761 + t2762 + t1780;
  t2282 = -0.031961*t2257;
  t2292 = -0.036672*t2257;
  t2318 = -0.046235*t2257;
  t2329 = -0.05005*t2257;
  t2351 = -0.052641*t2257;
  t2368 = -0.053726*t2257;
  t2392 = -0.053189*t2257;
  t2416 = -0.043244*t2257;
  t2433 = -0.038354*t2257;
  t2470 = -0.02598*t2257;
  t2490 = -0.024117*t2257;
  t2538 = -0.023839*t2257;
  t2558 = -0.025177*t2257;
  t2945 = 0.500442*t2225;
  t2949 = 0.155636*t2238;
  t2951 = var1[2] + t2128 + t2142 + t2166 + t2193 + t2207 + t2945 + t2949 + t2262;
  p_output1[0]=t1269;
  p_output1[1]=t1063 + t1141 + t1158 + 0.277666*t1196 + 0.213812*t1238 + t1274 + t865 + t902 + var1[0];
  p_output1[2]=t1063 + t1141 + t1158 + 0.277274*t1196 + 0.212385*t1238 + t1299 + t865 + t902 + var1[0];
  p_output1[3]=t1063 + t1141 + t1158 + 0.277309*t1196 + 0.212511*t1238 - 0.041609*t1254 + t865 + t902 + var1[0];
  p_output1[4]=t1063 + t1141 + t1158 + 0.277766*t1196 + 0.214176*t1238 + t1346 + t865 + t902 + var1[0];
  p_output1[5]=t1063 + t1141 + t1158 + 0.278596*t1196 + 0.217198*t1238 + t1375 + t865 + t902 + var1[0];
  p_output1[6]=t1063 + t1141 + t1158 + 0.27971*t1196 + 0.221252*t1238 + t1403 + t865 + t902 + var1[0];
  p_output1[7]=t1063 + t1141 + t1158 + 0.280986*t1196 + 0.225896*t1238 + t1416 + t865 + t902 + var1[0];
  p_output1[8]=t1063 + t1141 + t1158 + 0.282287*t1196 + 0.23063*t1238 + t1438 + t865 + t902 + var1[0];
  p_output1[9]=t1063 + t1141 + t1158 + 0.283471*t1196 + 0.234938*t1238 - 0.051087*t1254 + t865 + t902 + var1[0];
  p_output1[10]=t1063 + t1141 + t1158 + 0.28441*t1196 + 0.238355*t1238 - 0.047648*t1254 + t865 + t902 + var1[0];
  p_output1[11]=t1063 + t1141 + t1158 + 0.285002*t1196 + 0.240509*t1238 + t1517 + t865 + t902 + var1[0];
  p_output1[12]=t1063 + t1141 + t1158 + 0.285183*t1196 + 0.241169*t1238 + t1524 + t865 + t902 + var1[0];
  p_output1[13]=t1063 + t1141 + t1158 + 0.284934*t1196 + 0.240261*t1238 - 0.033507*t1254 + t865 + t902 + var1[0];
  p_output1[14]=t1063 + t1141 + t1158 + 0.284281*t1196 + 0.237886*t1238 - 0.029228*t1254 + t865 + t902 + var1[0];
  p_output1[15]=t1063 + t1141 + t1158 + 0.283295*t1196 + 0.234299*t1238 + t1583 + t865 + t902 + var1[0];
  p_output1[16]=t1063 + t1141 + t1158 + 0.282084*t1196 + 0.229889*t1238 + t1600 + t865 + t902 + var1[0];
  p_output1[17]=t1063 + t1141 + t1158 + 0.280777*t1196 + 0.225136*t1238 + t1611 + t865 + t902 + var1[0];
  p_output1[18]=t1063 + t1141 + t1158 + 0.279518*t1196 + 0.220552*t1238 + t1630 + t865 + t902 + var1[0];
  p_output1[19]=t1269;
  p_output1[20]=t1785;
  p_output1[21]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.277666*t1732 + 0.213812*t1768 + t1798 + var1[1];
  p_output1[22]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.277274*t1732 + 0.212385*t1768 + t1819 + var1[1];
  p_output1[23]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.277309*t1732 + 0.212511*t1768 - 0.041609*t1779 + var1[1];
  p_output1[24]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.277766*t1732 + 0.214176*t1768 + t1854 + var1[1];
  p_output1[25]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.278596*t1732 + 0.217198*t1768 + t1875 + var1[1];
  p_output1[26]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.27971*t1732 + 0.221252*t1768 + t1900 + var1[1];
  p_output1[27]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.280986*t1732 + 0.225896*t1768 + t1945 + var1[1];
  p_output1[28]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.282287*t1732 + 0.23063*t1768 + t1965 + var1[1];
  p_output1[29]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.283471*t1732 + 0.234938*t1768 - 0.051087*t1779 + var1[1];
  p_output1[30]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.28441*t1732 + 0.238355*t1768 - 0.047648*t1779 + var1[1];
  p_output1[31]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.285002*t1732 + 0.240509*t1768 + t2018 + var1[1];
  p_output1[32]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.285183*t1732 + 0.241169*t1768 + t2027 + var1[1];
  p_output1[33]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.284934*t1732 + 0.240261*t1768 - 0.033507*t1779 + var1[1];
  p_output1[34]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.284281*t1732 + 0.237886*t1768 - 0.029228*t1779 + var1[1];
  p_output1[35]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.283295*t1732 + 0.234299*t1768 + t2075 + var1[1];
  p_output1[36]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.282084*t1732 + 0.229889*t1768 + t2085 + var1[1];
  p_output1[37]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.280777*t1732 + 0.225136*t1768 + t2094 + var1[1];
  p_output1[38]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.279518*t1732 + 0.220552*t1768 + t2104 + var1[1];
  p_output1[39]=t1785;
  p_output1[40]=t2271;
  p_output1[41]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.277666*t2225 + 0.213812*t2238 + t2282 + var1[2];
  p_output1[42]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.277274*t2225 + 0.212385*t2238 + t2292 + var1[2];
  p_output1[43]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.277309*t2225 + 0.212511*t2238 - 0.041609*t2257 + var1[2];
  p_output1[44]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.277766*t2225 + 0.214176*t2238 + t2318 + var1[2];
  p_output1[45]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.278596*t2225 + 0.217198*t2238 + t2329 + var1[2];
  p_output1[46]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.27971*t2225 + 0.221252*t2238 + t2351 + var1[2];
  p_output1[47]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.280986*t2225 + 0.225896*t2238 + t2368 + var1[2];
  p_output1[48]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.282287*t2225 + 0.23063*t2238 + t2392 + var1[2];
  p_output1[49]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.283471*t2225 + 0.234938*t2238 - 0.051087*t2257 + var1[2];
  p_output1[50]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.28441*t2225 + 0.238355*t2238 - 0.047648*t2257 + var1[2];
  p_output1[51]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.285002*t2225 + 0.240509*t2238 + t2416 + var1[2];
  p_output1[52]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.285183*t2225 + 0.241169*t2238 + t2433 + var1[2];
  p_output1[53]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.284934*t2225 + 0.240261*t2238 - 0.033507*t2257 + var1[2];
  p_output1[54]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.284281*t2225 + 0.237886*t2238 - 0.029228*t2257 + var1[2];
  p_output1[55]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.283295*t2225 + 0.234299*t2238 + t2470 + var1[2];
  p_output1[56]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.282084*t2225 + 0.229889*t2238 + t2490 + var1[2];
  p_output1[57]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.280777*t2225 + 0.225136*t2238 + t2538 + var1[2];
  p_output1[58]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.279518*t2225 + 0.220552*t2238 + t2558 + var1[2];
  p_output1[59]=t2271;
  p_output1[60]=t2570;
  p_output1[61]=t1063 + t1141 + t1158 + 0.499666*t1196 + 0.152812*t1238 + t1274 + t865 + t902 + var1[0];
  p_output1[62]=t1063 + t1141 + t1158 + 0.499274*t1196 + 0.151385*t1238 + t1299 + t865 + t902 + var1[0];
  p_output1[63]=t1063 + t1141 + t1158 + 0.499309*t1196 + 0.151511*t1238 - 0.041608*t1254 + t865 + t902 + var1[0];
  p_output1[64]=t1063 + t1141 + t1158 + 0.499766*t1196 + 0.153176*t1238 + t1346 + t865 + t902 + var1[0];
  p_output1[65]=t1063 + t1141 + t1158 + 0.500596*t1196 + 0.156198*t1238 + t1375 + t865 + t902 + var1[0];
  p_output1[66]=t1063 + t1141 + t1158 + 0.50171*t1196 + 0.160252*t1238 + t1403 + t865 + t902 + var1[0];
  p_output1[67]=t1063 + t1141 + t1158 + 0.502986*t1196 + 0.164896*t1238 + t1416 + t865 + t902 + var1[0];
  p_output1[68]=t1063 + t1141 + t1158 + 0.504287*t1196 + 0.16963*t1238 + t1438 + t865 + t902 + var1[0];
  p_output1[69]=t1063 + t1141 + t1158 + 0.505471*t1196 + 0.173938*t1238 - 0.051086*t1254 + t865 + t902 + var1[0];
  p_output1[70]=t1063 + t1141 + t1158 + 0.50641*t1196 + 0.177355*t1238 - 0.047647*t1254 + t865 + t902 + var1[0];
  p_output1[71]=t1063 + t1141 + t1158 + 0.507002*t1196 + 0.179509*t1238 + t1517 + t865 + t902 + var1[0];
  p_output1[72]=t1063 + t1141 + t1158 + 0.507183*t1196 + 0.180169*t1238 + t1524 + t865 + t902 + var1[0];
  p_output1[73]=t1063 + t1141 + t1158 + 0.506934*t1196 + 0.179261*t1238 - 0.033506*t1254 + t865 + t902 + var1[0];
  p_output1[74]=t1063 + t1141 + t1158 + 0.506281*t1196 + 0.176886*t1238 - 0.029227*t1254 + t865 + t902 + var1[0];
  p_output1[75]=t1063 + t1141 + t1158 + 0.505295*t1196 + 0.173299*t1238 + t1583 + t865 + t902 + var1[0];
  p_output1[76]=t1063 + t1141 + t1158 + 0.504084*t1196 + 0.168889*t1238 + t1600 + t865 + t902 + var1[0];
  p_output1[77]=t1063 + t1141 + t1158 + 0.502777*t1196 + 0.164136*t1238 + t1611 + t865 + t902 + var1[0];
  p_output1[78]=t1063 + t1141 + t1158 + 0.501518*t1196 + 0.159552*t1238 + t1630 + t865 + t902 + var1[0];
  p_output1[79]=t2570;
  p_output1[80]=t2766;
  p_output1[81]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.499666*t1732 + 0.152812*t1768 + t1798 + var1[1];
  p_output1[82]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.499274*t1732 + 0.151385*t1768 + t1819 + var1[1];
  p_output1[83]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.499309*t1732 + 0.151511*t1768 - 0.041608*t1779 + var1[1];
  p_output1[84]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.499766*t1732 + 0.153176*t1768 + t1854 + var1[1];
  p_output1[85]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.500596*t1732 + 0.156198*t1768 + t1875 + var1[1];
  p_output1[86]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.50171*t1732 + 0.160252*t1768 + t1900 + var1[1];
  p_output1[87]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.502986*t1732 + 0.164896*t1768 + t1945 + var1[1];
  p_output1[88]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.504287*t1732 + 0.16963*t1768 + t1965 + var1[1];
  p_output1[89]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.505471*t1732 + 0.173938*t1768 - 0.051086*t1779 + var1[1];
  p_output1[90]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.50641*t1732 + 0.177355*t1768 - 0.047647*t1779 + var1[1];
  p_output1[91]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.507002*t1732 + 0.179509*t1768 + t2018 + var1[1];
  p_output1[92]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.507183*t1732 + 0.180169*t1768 + t2027 + var1[1];
  p_output1[93]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.506934*t1732 + 0.179261*t1768 - 0.033506*t1779 + var1[1];
  p_output1[94]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.506281*t1732 + 0.176886*t1768 - 0.029227*t1779 + var1[1];
  p_output1[95]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.505295*t1732 + 0.173299*t1768 + t2075 + var1[1];
  p_output1[96]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.504084*t1732 + 0.168889*t1768 + t2085 + var1[1];
  p_output1[97]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.502777*t1732 + 0.164136*t1768 + t2094 + var1[1];
  p_output1[98]=t1650 + t1665 + t1674 + t1697 + t1715 + 0.501518*t1732 + 0.159552*t1768 + t2104 + var1[1];
  p_output1[99]=t2766;
  p_output1[100]=t2951;
  p_output1[101]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.499666*t2225 + 0.152812*t2238 + t2282 + var1[2];
  p_output1[102]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.499274*t2225 + 0.151385*t2238 + t2292 + var1[2];
  p_output1[103]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.499309*t2225 + 0.151511*t2238 - 0.041608*t2257 + var1[2];
  p_output1[104]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.499766*t2225 + 0.153176*t2238 + t2318 + var1[2];
  p_output1[105]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.500596*t2225 + 0.156198*t2238 + t2329 + var1[2];
  p_output1[106]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.50171*t2225 + 0.160252*t2238 + t2351 + var1[2];
  p_output1[107]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.502986*t2225 + 0.164896*t2238 + t2368 + var1[2];
  p_output1[108]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.504287*t2225 + 0.16963*t2238 + t2392 + var1[2];
  p_output1[109]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.505471*t2225 + 0.173938*t2238 - 0.051086*t2257 + var1[2];
  p_output1[110]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.50641*t2225 + 0.177355*t2238 - 0.047647*t2257 + var1[2];
  p_output1[111]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.507002*t2225 + 0.179509*t2238 + t2416 + var1[2];
  p_output1[112]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.507183*t2225 + 0.180169*t2238 + t2433 + var1[2];
  p_output1[113]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.506934*t2225 + 0.179261*t2238 - 0.033506*t2257 + var1[2];
  p_output1[114]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.506281*t2225 + 0.176886*t2238 - 0.029227*t2257 + var1[2];
  p_output1[115]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.505295*t2225 + 0.173299*t2238 + t2470 + var1[2];
  p_output1[116]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.504084*t2225 + 0.168889*t2238 + t2490 + var1[2];
  p_output1[117]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.502777*t2225 + 0.164136*t2238 + t2538 + var1[2];
  p_output1[118]=t2128 + t2142 + t2166 + t2193 + t2207 + 0.501518*t2225 + 0.159552*t2238 + t2558 + var1[2];
  p_output1[119]=t2951;
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

#include "Link_fl_thigh_to_fl_knee_pitch_bar.hh"

namespace SymFunction
{

void Link_fl_thigh_to_fl_knee_pitch_bar_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
