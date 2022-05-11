/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:46:26 GMT+02:00
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
  double t726;
  double t310;
  double t511;
  double t784;
  double t844;
  double t714;
  double t928;
  double t613;
  double t929;
  double t940;
  double t943;
  double t959;
  double t971;
  double t981;
  double t990;
  double t998;
  double t1125;
  double t1140;
  double t1146;
  double t819;
  double t837;
  double t693;
  double t711;
  double t1031;
  double t1074;
  double t1216;
  double t1237;
  double t1247;
  double t1257;
  double t1260;
  double t1278;
  double t1326;
  double t1327;
  double t1330;
  double t1468;
  double t1485;
  double t1489;
  double t1593;
  double t1599;
  double t1600;
  double t1604;
  double t1605;
  double t1618;
  double t1643;
  double t1645;
  double t1646;
  double t1684;
  double t1690;
  double t1710;
  double t1711;
  double t1712;
  double t1689;
  double t1702;
  double t1704;
  double t1731;
  double t1732;
  double t1733;
  double t1749;
  double t1753;
  double t1763;
  double t1768;
  double t1769;
  double t1770;
  double t1811;
  double t1816;
  double t1817;
  double t1822;
  double t1823;
  double t1826;
  double t1836;
  double t1838;
  double t1845;
  double t1890;
  double t1891;
  double t1892;
  double t1900;
  double t1901;
  double t1902;
  double t1904;
  double t1905;
  double t1906;
  double t1910;
  double t1911;
  double t1914;
  double t1934;
  double t1935;
  double t1936;
  double t1941;
  double t1942;
  double t1943;
  double t1981;
  double t1982;
  double t1986;
  double t1990;
  double t1991;
  double t1992;
  double t1999;
  double t2000;
  double t2004;
  double t2020;
  double t2021;
  double t2022;
  double t2024;
  double t2025;
  double t2026;
  double t2011;
  double t2090;
  double t2091;
  double t2094;
  double t2097;
  double t2098;
  double t2099;
  double t2101;
  double t2102;
  double t2103;
  double t2120;
  double t2121;
  double t2122;
  double t2127;
  double t2128;
  double t2129;
  double t2131;
  double t2134;
  double t2135;
  double t1724;
  double t2160;
  double t2161;
  double t2165;
  double t2166;
  double t2167;
  double t2186;
  double t2187;
  double t2191;
  double t2195;
  double t2196;
  double t2199;
  double t2202;
  double t2203;
  double t2205;
  double t2224;
  double t2225;
  double t2226;
  t726 = Sin(var1[4]);
  t310 = Cos(var1[4]);
  t511 = Sin(var1[12]);
  t784 = Cos(var1[12]);
  t844 = Sin(var1[5]);
  t714 = Cos(var1[5]);
  t928 = Sin(var1[13]);
  t613 = Cos(var1[13]);
  t929 = t784*t310;
  t940 = -1.*t511*t726*t844;
  t943 = t929 + t940;
  t959 = Sin(var1[14]);
  t971 = t714*t928*t726;
  t981 = t613*t943;
  t990 = t971 + t981;
  t998 = Cos(var1[14]);
  t1125 = -1.*t613*t714*t726;
  t1140 = t928*t943;
  t1146 = t1125 + t1140;
  t819 = -1.*t784;
  t837 = 1. + t819;
  t693 = -1.*t613;
  t711 = 1. + t693;
  t1031 = -1.*t998;
  t1074 = 1. + t1031;
  t1216 = t310*t714*t511*t928;
  t1237 = -1.*t613*t310*t844;
  t1247 = t1216 + t1237;
  t1257 = t613*t310*t714*t511;
  t1260 = t310*t928*t844;
  t1278 = t1257 + t1260;
  t1326 = -1.*t511*t726;
  t1327 = t784*t310*t844;
  t1330 = t1326 + t1327;
  t1468 = t784*t726;
  t1485 = t310*t511*t844;
  t1489 = t1468 + t1485;
  t1593 = -1.*t310*t714*t928;
  t1599 = t613*t1489;
  t1600 = t1593 + t1599;
  t1604 = -1.*t613*t310*t714;
  t1605 = -1.*t928*t1489;
  t1618 = t1604 + t1605;
  t1643 = t613*t310*t714;
  t1645 = t928*t1489;
  t1646 = t1643 + t1645;
  t1684 = Cos(var1[3]);
  t1690 = Sin(var1[3]);
  t1710 = -1.*t714*t1690;
  t1711 = -1.*t1684*t726*t844;
  t1712 = t1710 + t1711;
  t1689 = t1684*t714*t726;
  t1702 = -1.*t1690*t844;
  t1704 = t1689 + t1702;
  t1731 = -1.*t784*t1684*t310;
  t1732 = -1.*t511*t1712;
  t1733 = t1731 + t1732;
  t1749 = -1.*t928*t1704;
  t1753 = t613*t1733;
  t1763 = t1749 + t1753;
  t1768 = t613*t1704;
  t1769 = t928*t1733;
  t1770 = t1768 + t1769;
  t1811 = t784*t1690*t726;
  t1816 = t310*t511*t1690*t844;
  t1817 = t1811 + t1816;
  t1822 = -1.*t310*t714*t928*t1690;
  t1823 = t613*t1817;
  t1826 = t1822 + t1823;
  t1836 = t613*t310*t714*t1690;
  t1838 = t928*t1817;
  t1845 = t1836 + t1838;
  t1890 = -1.*t714*t1690*t726;
  t1891 = -1.*t1684*t844;
  t1892 = t1890 + t1891;
  t1900 = t1684*t714;
  t1901 = -1.*t1690*t726*t844;
  t1902 = t1900 + t1901;
  t1904 = -1.*t511*t928*t1892;
  t1905 = t613*t1902;
  t1906 = t1904 + t1905;
  t1910 = -1.*t613*t511*t1892;
  t1911 = -1.*t928*t1902;
  t1914 = t1910 + t1911;
  t1934 = t310*t511*t1690;
  t1935 = -1.*t784*t1902;
  t1936 = t1934 + t1935;
  t1941 = -1.*t784*t310*t1690;
  t1942 = -1.*t511*t1902;
  t1943 = t1941 + t1942;
  t1981 = t714*t1690*t726;
  t1982 = t1684*t844;
  t1986 = t1981 + t1982;
  t1990 = -1.*t928*t1986;
  t1991 = t613*t1943;
  t1992 = t1990 + t1991;
  t1999 = -1.*t613*t1986;
  t2000 = -1.*t928*t1943;
  t2004 = t1999 + t2000;
  t2020 = t613*t1986;
  t2021 = t928*t1943;
  t2022 = t2020 + t2021;
  t2024 = -1.*t959*t1992;
  t2025 = t998*t2022;
  t2026 = t2024 + t2025;
  t2011 = t998*t1992;
  t2090 = -1.*t784*t1684*t726;
  t2091 = -1.*t1684*t310*t511*t844;
  t2094 = t2090 + t2091;
  t2097 = t1684*t310*t714*t928;
  t2098 = t613*t2094;
  t2099 = t2097 + t2098;
  t2101 = -1.*t613*t1684*t310*t714;
  t2102 = t928*t2094;
  t2103 = t2101 + t2102;
  t2120 = t714*t1690;
  t2121 = t1684*t726*t844;
  t2122 = t2120 + t2121;
  t2127 = -1.*t511*t928*t1704;
  t2128 = t613*t2122;
  t2129 = t2127 + t2128;
  t2131 = -1.*t613*t511*t1704;
  t2134 = -1.*t928*t2122;
  t2135 = t2131 + t2134;
  t1724 = -1.*t1684*t310*t511;
  t2160 = -1.*t784*t2122;
  t2161 = t1724 + t2160;
  t2165 = t784*t1684*t310;
  t2166 = -1.*t511*t2122;
  t2167 = t2165 + t2166;
  t2186 = -1.*t1684*t714*t726;
  t2187 = t1690*t844;
  t2191 = t2186 + t2187;
  t2195 = -1.*t928*t2191;
  t2196 = t613*t2167;
  t2199 = t2195 + t2196;
  t2202 = -1.*t613*t2191;
  t2203 = -1.*t928*t2167;
  t2205 = t2202 + t2203;
  t2224 = t613*t2191;
  t2225 = t928*t2167;
  t2226 = t2224 + t2225;
  p_output1[0]=1.;
  p_output1[1]=0.075*t1074*t1146 + 0.1575*t310*t511 - 0.325*t711*t714*t726 - 0.1575*t726*t837*t844 - 0.2255*(t310*t511 + t726*t784*t844) - 0.325*t928*t943 + 0.075*t959*t990 + 0.355*(-1.*t959*t990 + t1146*t998) - 0.0641*(t1146*t959 + t990*t998);
  p_output1[2]=0.075*t1074*t1247 + 0.2255*t310*t714*t784 + 0.1575*t310*t714*t837 - 0.325*t310*t711*t844 - 0.325*t310*t511*t714*t928 + 0.075*t1278*t959 + 0.355*(-1.*t1278*t959 + t1247*t998) - 0.0641*(t1247*t959 + t1278*t998);
  p_output1[3]=-0.2255*t1489 + 0.1575*t726*t784 + 0.1575*t310*t511*t844 - 0.325*t1330*t928 + 0.075*t1074*t1330*t928 + 0.075*t1330*t613*t959 - 0.0641*(t1330*t928*t959 + t1330*t613*t998) + 0.355*(-1.*t1330*t613*t959 + t1330*t928*t998);
  p_output1[4]=0.075*t1074*t1600 - 0.325*t1489*t613 + 0.325*t310*t714*t928 + 0.075*t1618*t959 + 0.355*(-1.*t1618*t959 + t1600*t998) - 0.0641*(t1600*t959 + t1618*t998);
  p_output1[5]=0.075*t1646*t959 + 0.075*t1600*t998 + 0.355*(-1.*t1646*t959 - 1.*t1600*t998) - 0.0641*(-1.*t1600*t959 + t1646*t998);
  p_output1[6]=-1.;
  p_output1[7]=1.;
  p_output1[8]=0.075*t1074*t1770 - 0.1575*t1684*t310*t511 + 0.325*t1704*t711 - 0.2255*(t1724 + t1712*t784) - 0.1575*t1712*t837 - 0.325*t1733*t928 + 0.075*t1763*t959 - 0.0641*(t1770*t959 + t1763*t998) + 0.355*(-1.*t1763*t959 + t1770*t998);
  p_output1[9]=0.075*t1074*t1845 + 0.325*t1690*t310*t711*t714 + 0.1575*t1690*t511*t726 + 0.1575*t1690*t310*t837*t844 - 0.2255*(t1690*t511*t726 - 1.*t1690*t310*t784*t844) - 0.325*t1817*t928 + 0.075*t1826*t959 - 0.0641*(t1845*t959 + t1826*t998) + 0.355*(-1.*t1826*t959 + t1845*t998);
  p_output1[10]=0.075*t1074*t1906 + 0.325*t1902*t711 - 0.2255*t1892*t784 - 0.1575*t1892*t837 + 0.325*t1892*t511*t928 + 0.075*t1914*t959 + 0.355*(-1.*t1914*t959 + t1906*t998) - 0.0641*(t1906*t959 + t1914*t998);
  p_output1[11]=-0.2255*t1943 - 0.1575*t1902*t511 - 0.1575*t1690*t310*t784 - 0.325*t1936*t928 + 0.075*t1074*t1936*t928 + 0.075*t1936*t613*t959 - 0.0641*(t1936*t928*t959 + t1936*t613*t998) + 0.355*(-1.*t1936*t613*t959 + t1936*t928*t998);
  p_output1[12]=0.075*t1074*t1992 - 0.325*t1943*t613 + 0.325*t1986*t928 + 0.075*t2004*t959 + 0.355*(t2011 - 1.*t2004*t959) - 0.0641*(t1992*t959 + t2004*t998);
  p_output1[13]=-0.0641*t2026 + 0.075*t2022*t959 + 0.075*t1992*t998 + 0.355*(-1.*t2022*t959 - 1.*t1992*t998);
  p_output1[14]=-1.;
  p_output1[15]=1.;
  p_output1[16]=0.075*t1074*t2022 + 0.355*t2026 - 0.1575*t1690*t310*t511 + 0.325*t1986*t711 - 0.2255*(-1.*t1690*t310*t511 + t1902*t784) - 0.1575*t1902*t837 - 0.325*t1943*t928 + 0.075*t1992*t959 - 0.0641*(t2011 + t2022*t959);
  p_output1[17]=0.075*t1074*t2103 - 0.325*t1684*t310*t711*t714 - 0.1575*t1684*t511*t726 - 0.1575*t1684*t310*t837*t844 - 0.2255*(-1.*t1684*t511*t726 + t1684*t310*t784*t844) - 0.325*t2094*t928 + 0.075*t2099*t959 - 0.0641*(t2103*t959 + t2099*t998) + 0.355*(-1.*t2099*t959 + t2103*t998);
  p_output1[18]=0.075*t1074*t2129 + 0.325*t2122*t711 - 0.2255*t1704*t784 - 0.1575*t1704*t837 + 0.325*t1704*t511*t928 + 0.075*t2135*t959 + 0.355*(-1.*t2135*t959 + t2129*t998) - 0.0641*(t2129*t959 + t2135*t998);
  p_output1[19]=-0.2255*t2167 - 0.1575*t2122*t511 + 0.1575*t1684*t310*t784 - 0.325*t2161*t928 + 0.075*t1074*t2161*t928 + 0.075*t2161*t613*t959 - 0.0641*(t2161*t928*t959 + t2161*t613*t998) + 0.355*(-1.*t2161*t613*t959 + t2161*t928*t998);
  p_output1[20]=0.075*t1074*t2199 - 0.325*t2167*t613 + 0.325*t2191*t928 + 0.075*t2205*t959 + 0.355*(-1.*t2205*t959 + t2199*t998) - 0.0641*(t2199*t959 + t2205*t998);
  p_output1[21]=0.075*t2226*t959 + 0.075*t2199*t998 + 0.355*(-1.*t2226*t959 - 1.*t2199*t998) - 0.0641*(-1.*t2199*t959 + t2226*t998);
  p_output1[22]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_FrFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void J_h_FrFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
