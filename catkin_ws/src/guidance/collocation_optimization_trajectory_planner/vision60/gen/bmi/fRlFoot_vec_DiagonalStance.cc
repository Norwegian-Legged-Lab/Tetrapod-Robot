/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 21:56:31 GMT+02:00
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
  double t875;
  double t548;
  double t924;
  double t1056;
  double t1029;
  double t1046;
  double t1057;
  double t514;
  double t1053;
  double t1067;
  double t1087;
  double t925;
  double t1092;
  double t1107;
  double t1111;
  double t1090;
  double t1604;
  double t1612;
  double t1130;
  double t1139;
  double t1165;
  double t1212;
  double t1213;
  double t1238;
  double t1247;
  double t1574;
  double t1585;
  double t1613;
  double t1616;
  double t1623;
  double t1638;
  double t1639;
  double t1657;
  double t1665;
  double t1681;
  double t1685;
  double t1717;
  double t1729;
  double t1731;
  double t1737;
  double t1741;
  double t1760;
  double t1089;
  double t1169;
  double t1183;
  double t1900;
  double t1904;
  double t1905;
  double t1911;
  double t1914;
  double t1919;
  double t1921;
  double t1957;
  double t1966;
  double t728;
  double t929;
  double t1017;
  double t1897;
  double t1906;
  double t2011;
  double t2015;
  double t2027;
  double t2031;
  double t2032;
  double t2033;
  double t2037;
  double t2041;
  double t1881;
  double t1892;
  double t1894;
  double t1896;
  double t2018;
  double t2019;
  double t2071;
  double t2076;
  double t2083;
  double t2085;
  double t2105;
  double t2107;
  double t2024;
  double t2045;
  double t2046;
  double t2084;
  double t2115;
  double t2117;
  double t2236;
  double t2237;
  double t2238;
  double t1205;
  double t1586;
  double t1592;
  double t2047;
  double t2250;
  double t2603;
  double t2840;
  double t3112;
  double t3236;
  double t3965;
  double t4004;
  double t3667;
  double t3717;
  double t3892;
  double t3843;
  double t4500;
  double t4410;
  t875 = Cos(var1[9]);
  t548 = Sin(var1[4]);
  t924 = Cos(var1[4]);
  t1056 = Cos(var1[10]);
  t1029 = Cos(var1[11]);
  t1046 = Sin(var1[10]);
  t1057 = Sin(var1[11]);
  t514 = Sin(var1[9]);
  t1053 = t1029*t1046;
  t1067 = -1.*t1056*t1057;
  t1087 = t1053 + t1067;
  t925 = Sin(var1[5]);
  t1092 = t1056*t1029;
  t1107 = t1046*t1057;
  t1111 = t1092 + t1107;
  t1090 = Cos(var1[5]);
  t1604 = Cos(var1[3]);
  t1612 = Sin(var1[3]);
  t1130 = t1090*t1111;
  t1139 = t514*t1087*t925;
  t1165 = t1130 + t1139;
  t1212 = -1.*t1029*t1046;
  t1213 = t1056*t1057;
  t1238 = t1212 + t1213;
  t1247 = t1090*t1238;
  t1574 = t514*t1111*t925;
  t1585 = t1247 + t1574;
  t1613 = t924*t514;
  t1616 = t875*t548*t925;
  t1623 = t1613 + t1616;
  t1638 = -1.*t1090*t514*t1087;
  t1639 = t1111*t925;
  t1657 = t1638 + t1639;
  t1665 = t875*t924*t1087;
  t1681 = -1.*t548*t1165;
  t1685 = t1665 + t1681;
  t1717 = -1.*t1090*t514*t1111;
  t1729 = t1238*t925;
  t1731 = t1717 + t1729;
  t1737 = t875*t924*t1111;
  t1741 = -1.*t548*t1585;
  t1760 = t1737 + t1741;
  t1089 = t875*t1087*t548;
  t1169 = t924*t1165;
  t1183 = t1089 + t1169;
  t1900 = -0.0641*t1029;
  t1904 = -0.28*t1057;
  t1905 = t1900 + t1904;
  t1911 = -1.*t1029;
  t1914 = 1. + t1911;
  t1919 = -0.575*t1914;
  t1921 = -0.295*t1029;
  t1957 = -0.0641*t1057;
  t1966 = t1919 + t1921 + t1957;
  t728 = t514*t548;
  t929 = -1.*t875*t924*t925;
  t1017 = t728 + t929;
  t1897 = 0.325*t1046;
  t1906 = t1056*t1905;
  t2011 = t1046*t1966;
  t2015 = t1897 + t1906 + t2011;
  t2027 = -1.*t1056;
  t2031 = 1. + t2027;
  t2032 = -0.325*t2031;
  t2033 = -1.*t1046*t1905;
  t2037 = t1056*t1966;
  t2041 = t2032 + t2033 + t2037;
  t1881 = -1.*t875;
  t1892 = 1. + t1881;
  t1894 = 0.1575*t1892;
  t1896 = 0.2255*t875;
  t2018 = -1.*t514*t2015;
  t2019 = t1894 + t1896 + t2018;
  t2071 = 0.068*t514;
  t2076 = t875*t2015;
  t2083 = t2071 + t2076;
  t2085 = t1090*t2041;
  t2105 = -1.*t2019*t925;
  t2107 = t2085 + t2105;
  t2024 = t1090*t2019;
  t2045 = t2041*t925;
  t2046 = t2024 + t2045;
  t2084 = t2083*t548;
  t2115 = t924*t2107;
  t2117 = t2084 + t2115;
  t2236 = t924*t2083;
  t2237 = -1.*t548*t2107;
  t2238 = t2236 + t2237;
  t1205 = t875*t1111*t548;
  t1586 = t924*t1585;
  t1592 = t1205 + t1586;
  t2047 = t875*t1090*t2046;
  t2250 = -1.*t2046*t1657;
  t2603 = t2046*t1657;
  t2840 = -1.*t2046*t1731;
  t3112 = -1.*t875*t1090*t2046;
  t3236 = t2046*t1731;
  t3965 = -1.*t514*t2083;
  t4004 = t875*t2083*t1111;
  t3667 = t514*t2083;
  t3717 = -1.*t875*t2083*t1087;
  t3892 = -1.*t875*t2083*t1111;
  t3843 = t875*t2083*t1087;
  t4500 = t2041*t1111;
  t4410 = -1.*t2041*t1238;
  p_output1[0]=t1183*var2[0] + t1017*var2[1] + t1592*var2[2];
  p_output1[1]=(t1604*t1657 - 1.*t1612*t1685)*var2[0] + (-1.*t1612*t1623 + t1090*t1604*t875)*var2[1] + (t1604*t1731 - 1.*t1612*t1760)*var2[2];
  p_output1[2]=(t1612*t1657 + t1604*t1685)*var2[0] + (t1604*t1623 + t1090*t1612*t875)*var2[1] + (t1612*t1731 + t1604*t1760)*var2[2];
  p_output1[3]=(t1592*(-1.*t1017*t2117 - 1.*t1623*t2238 + t3112) + t1017*(t1592*t2117 + t1760*t2238 + t3236))*var2[0] + (t1592*(t1183*t2117 + t1685*t2238 + t2603) + t1183*(-1.*t1592*t2117 - 1.*t1760*t2238 + t2840))*var2[1] + (t1183*(t2047 + t1017*t2117 + t1623*t2238) + t1017*(-1.*t1183*t2117 - 1.*t1685*t2238 + t2250))*var2[2];
  p_output1[4]=(t1090*(t1585*t2107 + t3236 + t4004)*t875 + t1731*(t3112 + t3965 + t2107*t875*t925))*var2[0] + (t1731*(t1165*t2107 + t2603 + t3843) + t1657*(-1.*t1585*t2107 + t2840 + t3892))*var2[1] + (t1090*(-1.*t1165*t2107 + t2250 + t3717)*t875 + t1657*(t2047 + t3667 - 1.*t2107*t875*t925))*var2[2];
  p_output1[5]=(t514*(t1238*t2041 + t4004 - 1.*t1111*t2019*t514) + t1111*t875*(t3965 - 1.*t2019*t875))*var2[0] + (t1111*(t3843 + t4500 - 1.*t1087*t2019*t514)*t875 + t1087*(t3892 + t4410 + t1111*t2019*t514)*t875)*var2[1] + (t514*(-1.*t1111*t2041 + t3717 + t1087*t2019*t514) + t1087*t875*(t3667 + t2019*t875))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-0.1575*t1087 - 0.2255*t1238)*var2[0] + (t1111*(-1.*t1111*t2015 + t4410) + t1238*(t1087*t2015 + t4500))*var2[1] + 0.068*t1111*var2[2];
  p_output1[10]=(-0.325*t1057 - 1.*t1029*t1905 - 1.*t1057*t1966)*var2[0] + (0.325*t1029 - 1.*t1057*t1905 + t1029*t1966)*var2[2];
  p_output1[11]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fRlFoot_vec_DiagonalStance.hh"

namespace SymFunction
{

void fRlFoot_vec_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
