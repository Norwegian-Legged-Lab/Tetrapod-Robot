/*
 * Automatically Generated from Mathematica.
 * Wed 8 Dec 2021 23:11:21 GMT+01:00
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
  double t655;
  double t113;
  double t223;
  double t243;
  double t375;
  double t431;
  double t439;
  double t665;
  double t769;
  double t891;
  double t969;
  double t131;
  double t1085;
  double t1023;
  double t1373;
  double t1377;
  double t1467;
  double t1596;
  double t1652;
  double t1664;
  double t1674;
  double t1683;
  double t1702;
  double t1719;
  double t1979;
  double t1860;
  double t1866;
  double t1870;
  double t1885;
  double t1889;
  double t1926;
  double t2051;
  double t2093;
  double t2096;
  double t2104;
  double t2156;
  double t2158;
  double t2159;
  double t2168;
  double t2224;
  double t2242;
  double t524;
  double t807;
  double t968;
  double t984;
  double t991;
  double t401;
  double t442;
  double t2561;
  double t1054;
  double t1068;
  double t2584;
  double t1262;
  double t1293;
  double t1305;
  double t1335;
  double t1339;
  double t2583;
  double t2586;
  double t2607;
  double t2623;
  double t2648;
  double t2671;
  double t1507;
  double t1531;
  double t1579;
  double t1711;
  double t1736;
  double t1829;
  double t2711;
  double t2713;
  double t2717;
  double t2729;
  double t2730;
  double t2742;
  double t1943;
  double t1948;
  double t1991;
  double t2009;
  double t2042;
  double t2129;
  double t2132;
  double t2139;
  double t2142;
  double t2151;
  double t2763;
  double t2768;
  double t2785;
  double t2788;
  double t2812;
  double t2827;
  double t2829;
  double t2834;
  double t2289;
  double t2291;
  double t2840;
  double t2844;
  double t2848;
  double t2868;
  double t2513;
  double t2518;
  double t3019;
  double t3021;
  double t3028;
  double t3040;
  double t3047;
  double t3049;
  double t3058;
  double t3061;
  double t3062;
  double t3078;
  double t3082;
  double t3085;
  double t3096;
  double t3097;
  double t3099;
  double t3107;
  double t3114;
  double t3115;
  double t3116;
  double t3129;
  double t3154;
  double t3158;
  double t3173;
  double t3182;
  t655 = Cos(var1[10]);
  t113 = Cos(var1[4]);
  t223 = Cos(var1[9]);
  t243 = -1.*t223;
  t375 = 1. + t243;
  t431 = Sin(var1[9]);
  t439 = -0.15121*t431;
  t665 = -1.*t655;
  t769 = 1. + t665;
  t891 = -1. + t655;
  t969 = Sin(var1[10]);
  t131 = Cos(var1[5]);
  t1085 = Sin(var1[5]);
  t1023 = Sin(var1[4]);
  t1373 = -1.*t113*t131*t431;
  t1377 = -1.*t223*t113*t1085;
  t1467 = t1373 + t1377;
  t1596 = t223*t113*t131;
  t1652 = -1.*t113*t431*t1085;
  t1664 = t1596 + t1652;
  t1674 = Cos(var1[11]);
  t1683 = -1.*t1674;
  t1702 = 1. + t1683;
  t1719 = Sin(var1[11]);
  t1979 = -1. + t1674;
  t1860 = t969*t1023;
  t1866 = -4.e-6*t969*t1467;
  t1870 = -1.000000000016*t769;
  t1885 = 1. + t1870;
  t1889 = t1885*t1664;
  t1926 = t1860 + t1866 + t1889;
  t2051 = t655*t1023;
  t2093 = 4.e-6*t769*t1467;
  t2096 = -1.*t969*t1664;
  t2104 = t2051 + t2093 + t2096;
  t2156 = 4.e-6*t769*t1023;
  t2158 = 1.6e-11*t891;
  t2159 = 1. + t2158;
  t2168 = t2159*t1467;
  t2224 = 4.e-6*t969*t1664;
  t2242 = t2156 + t2168 + t2224;
  t524 = -4.9936e-13*var1[10];
  t807 = -0.038749*t769;
  t968 = 6.19984e-13*t891;
  t984 = -0.281210000004*t969;
  t991 = t524 + t807 + t968 + t984;
  t401 = 0.15121*t375;
  t442 = t401 + t439;
  t2561 = Sin(var1[3]);
  t1054 = -0.15121*t375;
  t1068 = t1054 + t439;
  t2584 = Cos(var1[3]);
  t1262 = -1.2484e-7*var1[10];
  t1293 = 2.479936e-18*t769;
  t1305 = -1.54996e-7*t891;
  t1335 = 1.124840000016e-6*t969;
  t1339 = t1262 + t1293 + t1305 + t1335;
  t2583 = t131*t2561*t1023;
  t2586 = t2584*t1085;
  t2607 = t2583 + t2586;
  t2623 = t2584*t131;
  t2648 = -1.*t2561*t1023*t1085;
  t2671 = t2623 + t2648;
  t1507 = 0.281210000008499*t769;
  t1531 = -0.03874900000062*t969;
  t1579 = t1507 + t1531;
  t1711 = 0.50315000001605*t1702;
  t1736 = -0.0398890000006382*t1719;
  t1829 = t1711 + t1736;
  t2711 = -1.*t431*t2607;
  t2713 = t223*t2671;
  t2717 = t2711 + t2713;
  t2729 = t223*t2607;
  t2730 = t431*t2671;
  t2742 = t2729 + t2730;
  t1943 = -5.04e-14*var1[11];
  t1948 = -0.039889*t1702;
  t1991 = 6.38224e-13*t1979;
  t2009 = -0.503150000008*t1719;
  t2042 = t1943 + t1948 + t1991 + t2009;
  t2129 = -1.26e-8*var1[11];
  t2132 = 2.552896e-18*t1702;
  t2139 = -1.59556e-7*t1979;
  t2142 = 2.012600000032e-6*t1719;
  t2151 = t2129 + t2132 + t2139 + t2142;
  t2763 = -1.*t113*t969*t2561;
  t2768 = -4.e-6*t969*t2717;
  t2785 = t1885*t2742;
  t2788 = t2763 + t2768 + t2785;
  t2812 = -1.*t655*t113*t2561;
  t2827 = 4.e-6*t769*t2717;
  t2829 = -1.*t969*t2742;
  t2834 = t2812 + t2827 + t2829;
  t2289 = 1.6e-11*t1979;
  t2291 = 1. + t2289;
  t2840 = -4.e-6*t769*t113*t2561;
  t2844 = t2159*t2717;
  t2848 = 4.e-6*t969*t2742;
  t2868 = t2840 + t2844 + t2848;
  t2513 = -1.000000000016*t1702;
  t2518 = 1. + t2513;
  t3019 = -1.*t2584*t131*t1023;
  t3021 = t2561*t1085;
  t3028 = t3019 + t3021;
  t3040 = t131*t2561;
  t3047 = t2584*t1023*t1085;
  t3049 = t3040 + t3047;
  t3058 = -1.*t431*t3028;
  t3061 = t223*t3049;
  t3062 = t3058 + t3061;
  t3078 = t223*t3028;
  t3082 = t431*t3049;
  t3085 = t3078 + t3082;
  t3096 = t2584*t113*t969;
  t3097 = -4.e-6*t969*t3062;
  t3099 = t1885*t3085;
  t3107 = t3096 + t3097 + t3099;
  t3114 = t655*t2584*t113;
  t3115 = 4.e-6*t769*t3062;
  t3116 = -1.*t969*t3085;
  t3129 = t3114 + t3115 + t3116;
  t3154 = 4.e-6*t769*t2584*t113;
  t3158 = t2159*t3062;
  t3173 = 4.e-6*t969*t3085;
  t3182 = t3154 + t3158 + t3173;
  p_output1[0]=-1.*t1068*t1085*t113 + t1339*t1467 + t1579*t1664 + t1829*t1926 + t2042*t2104 + t2151*t2242 - 0.041195*(-1.*t1719*t1926 + t1674*t2104 + 4.e-6*t1702*t2242) - 0.14871*(4.e-6*t1719*t1926 + 4.e-6*t1702*t2104 + t2242*t2291) + 0.803147*(t1719*t2104 - 4.e-6*t1719*t2242 + t1926*t2518) + t113*t131*t442 + t1023*t991 + var1[0] - 1.*var2[0];
  p_output1[1]=t1068*t2671 + t1339*t2717 + t1579*t2742 + t1829*t2788 + t2042*t2834 + t2151*t2868 - 0.041195*(-1.*t1719*t2788 + t1674*t2834 + 4.e-6*t1702*t2868) + 0.803147*(t2518*t2788 + t1719*t2834 - 4.e-6*t1719*t2868) - 0.14871*(4.e-6*t1719*t2788 + 4.e-6*t1702*t2834 + t2291*t2868) + t2607*t442 - 1.*t113*t2561*t991 + var1[1] - 1.*var2[1];
  p_output1[2]=t1068*t3049 + t1339*t3062 + t1579*t3085 + t1829*t3107 + t2042*t3129 + t2151*t3182 - 0.041195*(-1.*t1719*t3107 + t1674*t3129 + 4.e-6*t1702*t3182) + 0.803147*(t2518*t3107 + t1719*t3129 - 4.e-6*t1719*t3182) - 0.14871*(4.e-6*t1719*t3107 + 4.e-6*t1702*t3129 + t2291*t3182) + t3028*t442 + t113*t2584*t991 + var1[2] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_FrFoot_ParallelStance1.hh"

namespace ParallelStance1
{

void h_FrFoot_ParallelStance1_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
