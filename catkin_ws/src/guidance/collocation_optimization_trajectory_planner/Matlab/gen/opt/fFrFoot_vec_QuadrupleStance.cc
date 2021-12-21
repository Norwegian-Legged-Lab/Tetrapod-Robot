/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 22:32:40 GMT+01:00
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
  double t624;
  double t261;
  double t966;
  double t759;
  double t832;
  double t949;
  double t989;
  double t1018;
  double t319;
  double t359;
  double t1053;
  double t1086;
  double t1108;
  double t1156;
  double t1155;
  double t1130;
  double t1136;
  double t1137;
  double t1140;
  double t1141;
  double t1147;
  double t1148;
  double t1165;
  double t1166;
  double t1168;
  double t1543;
  double t1118;
  double t1123;
  double t1126;
  double t1522;
  double t1527;
  double t1542;
  double t1552;
  double t1561;
  double t1590;
  double t1592;
  double t1593;
  double t1603;
  double t1613;
  double t1659;
  double t1669;
  double t1670;
  double t1700;
  double t1708;
  double t1709;
  double t1710;
  double t1733;
  double t1735;
  double t1738;
  double t1743;
  double t1747;
  double t1748;
  double t1473;
  double t1813;
  double t1821;
  double t1823;
  double t1836;
  double t1838;
  double t1845;
  double t1846;
  double t1853;
  double t1872;
  double t1904;
  double t1908;
  double t1915;
  double t1921;
  double t1922;
  double t1924;
  double t1930;
  double t1453;
  double t1459;
  double t1466;
  double t1149;
  double t1169;
  double t1239;
  double t1024;
  double t1109;
  double t1110;
  double t1268;
  double t1481;
  double t1482;
  double t1954;
  double t1756;
  double t1781;
  double t1782;
  double t1730;
  double t1749;
  double t1750;
  double t1964;
  double t1580;
  double t1646;
  double t1675;
  double t1679;
  double t1755;
  double t1793;
  double t1797;
  double t1936;
  double t1938;
  double t1940;
  double t1918;
  double t1931;
  double t1933;
  double t1828;
  double t1839;
  double t1861;
  double t1869;
  double t1935;
  double t1942;
  double t1944;
  double t1957;
  double t1958;
  double t1961;
  double t1966;
  double t1967;
  double t1975;
  double t2001;
  double t2002;
  double t2007;
  double t2011;
  double t2014;
  double t2015;
  double t2019;
  double t2022;
  double t2023;
  double t2025;
  double t2028;
  double t2029;
  double t1685;
  double t1804;
  double t1811;
  double t2106;
  double t2115;
  double t2116;
  double t2120;
  double t2126;
  double t2128;
  double t2129;
  double t2139;
  double t2154;
  double t2160;
  double t2169;
  double t2171;
  double t2172;
  double t2173;
  double t2175;
  double t2177;
  double t2179;
  double t2073;
  double t2074;
  double t2076;
  double t2090;
  double t2091;
  double t2092;
  double t2094;
  double t2130;
  double t2170;
  double t2180;
  double t2181;
  double t2184;
  double t2185;
  double t2188;
  double t2189;
  double t2191;
  double t2194;
  double t1122;
  double t1484;
  double t1488;
  double t2198;
  double t2202;
  double t2203;
  double t2204;
  double t2075;
  double t2183;
  double t2195;
  double t2196;
  double t2217;
  double t2220;
  double t2222;
  double t2223;
  double t2227;
  double t2228;
  double t2229;
  double t2234;
  double t2240;
  double t2241;
  double t2244;
  double t2197;
  double t2208;
  double t2209;
  double t2235;
  double t2245;
  double t2247;
  double t2260;
  double t2264;
  double t2266;
  double t1870;
  double t1945;
  double t1946;
  double t2211;
  double t2275;
  double t2311;
  double t2321;
  double t2340;
  double t2358;
  double t2389;
  double t2381;
  double t2423;
  double t2417;
  double t2407;
  double t2400;
  double t2504;
  double t2654;
  double t2657;
  double t2658;
  double t2661;
  double t2644;
  double t2645;
  double t2646;
  double t2649;
  double t2674;
  double t2676;
  double t2677;
  double t2680;
  double t2684;
  double t2708;
  double t2709;
  double t2777;
  double t2781;
  double t2782;
  double t2789;
  double t2799;
  double t2800;
  double t2801;
  t624 = Cos(var1[11]);
  t261 = Cos(var1[10]);
  t966 = -1. + t624;
  t759 = -1.*t624;
  t832 = 1. + t759;
  t949 = 1.6e-11*t832;
  t989 = 1.6e-11*t966;
  t1018 = -1. + t949 + t989;
  t319 = -1.*t261;
  t359 = 1. + t319;
  t1053 = 4.e-6*t966;
  t1086 = -4.e-6*t624;
  t1108 = t1053 + t1086;
  t1156 = Sin(var1[10]);
  t1155 = Cos(var1[9]);
  t1130 = -1. + t261;
  t1136 = 1.6e-11*t1130;
  t1137 = 1. + t1136;
  t1140 = t1137*t1018;
  t1141 = 4.e-6*t359*t1108;
  t1147 = t1140 + t1141;
  t1148 = Sin(var1[9]);
  t1165 = 4.e-6*t1018*t1156;
  t1166 = -1.*t1108*t1156;
  t1168 = t1165 + t1166;
  t1543 = Sin(var1[11]);
  t1118 = Sin(var1[4]);
  t1123 = Cos(var1[4]);
  t1126 = Cos(var1[5]);
  t1522 = -1.000000000016*t832;
  t1527 = 1. + t1522;
  t1542 = 0.004352*t1527;
  t1552 = -0.9999910000159999*t1543;
  t1561 = t1542 + t1552;
  t1590 = -1. + t949;
  t1592 = 4.e-6*t1590;
  t1593 = 3.999964e-6*t832;
  t1603 = -1.7408e-8*t1543;
  t1613 = t1592 + t1593 + t1603;
  t1659 = 0.999991*t624;
  t1669 = 0.004352*t1543;
  t1670 = t989 + t1659 + t1669;
  t1700 = -4.e-6*t1156*t1561;
  t1708 = t1137*t1613;
  t1709 = 4.e-6*t359*t1670;
  t1710 = 0. + t1700 + t1708 + t1709;
  t1733 = -1.000000000016*t359;
  t1735 = 1. + t1733;
  t1738 = t1735*t1561;
  t1743 = 4.e-6*t1156*t1613;
  t1747 = -1.*t1156*t1670;
  t1748 = 0. + t1738 + t1743 + t1747;
  t1473 = Sin(var1[5]);
  t1813 = -1.7408e-8*t832;
  t1821 = -3.999964e-6*t1543;
  t1823 = t1813 + t1821;
  t1836 = 0.999991*t1527;
  t1838 = t1836 + t1669;
  t1845 = -0.004352*t624;
  t1846 = 0.999991*t1543;
  t1853 = t1845 + t1846;
  t1872 = t1137*t1823;
  t1904 = -4.e-6*t1156*t1838;
  t1908 = 4.e-6*t359*t1853;
  t1915 = 0. + t1872 + t1904 + t1908;
  t1921 = 4.e-6*t1156*t1823;
  t1922 = t1735*t1838;
  t1924 = -1.*t1156*t1853;
  t1930 = 0. + t1921 + t1922 + t1924;
  t1453 = t1155*t1147;
  t1459 = t1148*t1168;
  t1466 = t1453 + t1459;
  t1149 = -1.*t1147*t1148;
  t1169 = t1155*t1168;
  t1239 = t1149 + t1169;
  t1024 = 4.e-6*t359*t1018;
  t1109 = t261*t1108;
  t1110 = t1024 + t1109;
  t1268 = t1126*t1239;
  t1481 = -1.*t1466*t1473;
  t1482 = t1268 + t1481;
  t1954 = Cos(var1[3]);
  t1756 = t1155*t1710;
  t1781 = t1148*t1748;
  t1782 = 0. + t1756 + t1781;
  t1730 = -1.*t1148*t1710;
  t1749 = t1155*t1748;
  t1750 = 0. + t1730 + t1749;
  t1964 = Sin(var1[3]);
  t1580 = t1156*t1561;
  t1646 = 4.e-6*t359*t1613;
  t1675 = t261*t1670;
  t1679 = 0. + t1580 + t1646 + t1675;
  t1755 = t1126*t1750;
  t1793 = -1.*t1782*t1473;
  t1797 = 0. + t1755 + t1793;
  t1936 = t1155*t1915;
  t1938 = t1148*t1930;
  t1940 = 0. + t1936 + t1938;
  t1918 = -1.*t1148*t1915;
  t1931 = t1155*t1930;
  t1933 = 0. + t1918 + t1931;
  t1828 = 4.e-6*t359*t1823;
  t1839 = t1156*t1838;
  t1861 = t261*t1853;
  t1869 = 0. + t1828 + t1839 + t1861;
  t1935 = t1126*t1933;
  t1942 = -1.*t1940*t1473;
  t1944 = 0. + t1935 + t1942;
  t1957 = t1126*t1466;
  t1958 = t1239*t1473;
  t1961 = t1957 + t1958;
  t1966 = t1110*t1123;
  t1967 = -1.*t1118*t1482;
  t1975 = t1966 + t1967;
  t2001 = t1126*t1782;
  t2002 = t1750*t1473;
  t2007 = 0. + t2001 + t2002;
  t2011 = t1123*t1679;
  t2014 = -1.*t1118*t1797;
  t2015 = 0. + t2011 + t2014;
  t2019 = t1126*t1940;
  t2022 = t1933*t1473;
  t2023 = 0. + t2019 + t2022;
  t2025 = t1123*t1869;
  t2028 = -1.*t1118*t1944;
  t2029 = 0. + t2025 + t2028;
  t1685 = t1679*t1118;
  t1804 = t1123*t1797;
  t1811 = 0. + t1685 + t1804;
  t2106 = -1.26e-8*var1[11];
  t2115 = 1. + t989;
  t2116 = -0.14871*t2115;
  t2120 = -1.64779999997447e-7*t832;
  t2126 = -1.59556e-7*t966;
  t2128 = -1.199987999968e-6*t1543;
  t2129 = t2106 + t2116 + t2120 + t2126 + t2128;
  t2139 = 0.803147*t1527;
  t2154 = 0.50315000001605*t832;
  t2160 = 0.00130540515936178*t1543;
  t2169 = t2139 + t2154 + t2160;
  t2171 = -5.04e-14*var1[11];
  t2172 = -0.03988959484*t832;
  t2173 = 6.38224e-13*t966;
  t2175 = -0.041195*t624;
  t2177 = 0.299996999992*t1543;
  t2179 = t2171 + t2172 + t2173 + t2175 + t2177;
  t2073 = -1.*t1155;
  t2074 = 1. + t2073;
  t2076 = -0.15121*t1148;
  t2090 = -1.2484e-7*var1[10];
  t2091 = 2.479936e-18*t359;
  t2092 = -1.54996e-7*t1130;
  t2094 = 1.124840000016e-6*t1156;
  t2130 = t1137*t2129;
  t2170 = -4.e-6*t1156*t2169;
  t2180 = 4.e-6*t359*t2179;
  t2181 = t2090 + t2091 + t2092 + t2094 + t2130 + t2170 + t2180;
  t2184 = 0.281210000008499*t359;
  t2185 = -0.03874900000062*t1156;
  t2188 = 4.e-6*t1156*t2129;
  t2189 = t1735*t2169;
  t2191 = -1.*t1156*t2179;
  t2194 = t2184 + t2185 + t2188 + t2189 + t2191;
  t1122 = t1110*t1118;
  t1484 = t1123*t1482;
  t1488 = t1122 + t1484;
  t2198 = 0.15121*t2074;
  t2202 = -1.*t1148*t2181;
  t2203 = t1155*t2194;
  t2204 = t2198 + t2076 + t2202 + t2203;
  t2075 = -0.15121*t2074;
  t2183 = t1155*t2181;
  t2195 = t1148*t2194;
  t2196 = t2075 + t2076 + t2183 + t2195;
  t2217 = -4.9936e-13*var1[10];
  t2220 = -0.038749*t359;
  t2222 = 6.19984e-13*t1130;
  t2223 = -0.281210000004*t1156;
  t2227 = 4.e-6*t359*t2129;
  t2228 = t1156*t2169;
  t2229 = t261*t2179;
  t2234 = 0. + t2217 + t2220 + t2222 + t2223 + t2227 + t2228 + t2229;
  t2240 = t1126*t2204;
  t2241 = -1.*t2196*t1473;
  t2244 = 0. + t2240 + t2241;
  t2197 = t1126*t2196;
  t2208 = t2204*t1473;
  t2209 = 0. + t2197 + t2208;
  t2235 = t2234*t1118;
  t2245 = t1123*t2244;
  t2247 = 0. + t2235 + t2245;
  t2260 = t1123*t2234;
  t2264 = -1.*t1118*t2244;
  t2266 = 0. + t2260 + t2264;
  t1870 = t1869*t1118;
  t1945 = t1123*t1944;
  t1946 = 0. + t1870 + t1945;
  t2211 = t1961*t2209;
  t2275 = -1.*t2007*t2209;
  t2311 = t2007*t2209;
  t2321 = -1.*t2209*t2023;
  t2340 = -1.*t1961*t2209;
  t2358 = t2209*t2023;
  t2389 = -1.*t1679*t2234;
  t2381 = t1110*t2234;
  t2423 = t2234*t1869;
  t2417 = -1.*t1110*t2234;
  t2407 = -1.*t2234*t1869;
  t2400 = t1679*t2234;
  t2504 = t2217 + t2220 + t2222 + t2223 + t2227 + t2228 + t2229;
  t2654 = t2129*t1613;
  t2657 = t1561*t2169;
  t2658 = t1670*t2179;
  t2661 = t2654 + t2657 + t2658;
  t2644 = -1.*t1823*t2129;
  t2645 = -1.*t2169*t1838;
  t2646 = -1.*t2179*t1853;
  t2649 = t2644 + t2645 + t2646;
  t2674 = t1823*t2129;
  t2676 = t2169*t1838;
  t2677 = t2179*t1853;
  t2680 = t2674 + t2676 + t2677;
  t2684 = -1.*t1018*t2129;
  t2708 = -1.*t1108*t2179;
  t2709 = t2684 + t2708;
  t2777 = -1.*t2129*t1613;
  t2781 = -1.*t1561*t2169;
  t2782 = -1.*t1670*t2179;
  t2789 = t2777 + t2781 + t2782;
  t2799 = t1018*t2129;
  t2800 = t1108*t2179;
  t2801 = t2799 + t2800;
  p_output1[0]=t1946*var2[0] + t1811*var2[1] + t1488*var2[2];
  p_output1[1]=(0. + t1954*t2023 - 1.*t1964*t2029)*var2[0] + (0. + t1954*t2007 - 1.*t1964*t2015)*var2[1] + (t1954*t1961 - 1.*t1964*t1975)*var2[2];
  p_output1[2]=(0. + t1964*t2023 + t1954*t2029)*var2[0] + (0. + t1964*t2007 + t1954*t2015)*var2[1] + (t1961*t1964 + t1954*t1975)*var2[2];
  p_output1[3]=(t1811*(t2211 + t1488*t2247 + t1975*t2266) + t1488*(-1.*t1811*t2247 - 1.*t2015*t2266 + t2275))*var2[0] + (t1946*(-1.*t1488*t2247 - 1.*t1975*t2266 + t2340) + t1488*(t1946*t2247 + t2029*t2266 + t2358))*var2[1] + (t1946*(t1811*t2247 + t2015*t2266 + t2311) + t1811*(-1.*t1946*t2247 - 1.*t2029*t2266 + t2321))*var2[2];
  p_output1[4]=(t2007*(t2211 + t1482*t2244 + t2381) + t1961*(-1.*t1797*t2244 + t2275 + t2389))*var2[0] + (t2023*(-1.*t1482*t2244 + t2340 + t2417) + t1961*(t1944*t2244 + t2358 + t2423))*var2[1] + (t2023*(t1797*t2244 + t2311 + t2400) + t2007*(-1.*t1944*t2244 + t2321 + t2407))*var2[2];
  p_output1[5]=(t1679*(t1466*t2196 + t1239*t2204 + t2381) + t1110*(-1.*t1782*t2196 - 1.*t1750*t2204 + t2389))*var2[0] + (t1869*(-1.*t1466*t2196 - 1.*t1239*t2204 + t2417) + t1110*(t1940*t2196 + t1933*t2204 + t2423))*var2[1] + (t1869*(t1782*t2196 + t1750*t2204 + t2400) + t1679*(-1.*t1940*t2196 - 1.*t1933*t2204 + t2407))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.15121*t1915 - 0.15121*t1930 + t1679*(t1147*t2181 + t1168*t2194 + t1110*t2504) + t1110*(-1.*t1710*t2181 - 1.*t1748*t2194 - 1.*t1679*t2504))*var2[0] + (-0.15121*t1710 - 0.15121*t1748 + t1869*(-1.*t1147*t2181 - 1.*t1168*t2194 - 1.*t1110*t2504) + t1110*(t1915*t2181 + t1930*t2194 + t1869*t2504))*var2[1] + (-0.15121*t1147 - 0.15121*t1168 + t1869*(t1710*t2181 + t1748*t2194 + t1679*t2504) + t1679*(-1.*t1915*t2181 - 1.*t1930*t2194 - 1.*t1869*t2504))*var2[2];
  p_output1[10]=(1.e-6*t1823 - 0.038749*t1838 - 0.28121*t1853 - 1.*t1018*t2789 - 1.*t1613*t2801 + 4.e-6*(-1.*t1108*t2789 - 1.*t1670*t2801))*var2[0] + (-0.038749*t1561 + 1.e-6*t1613 - 0.28121*t1670 - 1.*t1018*t2680 - 1.*t1823*t2709 + 4.e-6*(-1.*t1108*t2680 - 1.*t1853*t2709))*var2[1] + (1.e-6*t1018 - 0.28121*t1108 - 1.*t1613*t2649 - 1.*t1823*t2661 + 4.e-6*(-1.*t1670*t2649 - 1.*t1853*t2661))*var2[2];
  p_output1[11]=-1.9353204325022392e-7*var2[0] + 0.29999998115510645*var2[1] + 1.1914820871506078e-8*var2[2];
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fFrFoot_vec_QuadrupleStance.hh"

namespace QuadrupleStance
{

void fFrFoot_vec_QuadrupleStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
