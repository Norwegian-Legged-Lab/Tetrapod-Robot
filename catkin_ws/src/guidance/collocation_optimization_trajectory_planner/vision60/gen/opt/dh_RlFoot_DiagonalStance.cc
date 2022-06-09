/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:06:31 GMT+02:00
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
  double t938;
  double t1539;
  double t1750;
  double t1755;
  double t1799;
  double t1798;
  double t1538;
  double t1546;
  double t1554;
  double t1598;
  double t1624;
  double t1625;
  double t1626;
  double t1630;
  double t1632;
  double t1801;
  double t1802;
  double t1803;
  double t1804;
  double t1786;
  double t1793;
  double t1794;
  double t1800;
  double t1808;
  double t1809;
  double t2025;
  double t2026;
  double t2027;
  double t1882;
  double t1937;
  double t2002;
  double t2003;
  double t2020;
  double t2022;
  double t1754;
  double t1756;
  double t1757;
  double t2086;
  double t2090;
  double t2085;
  double t2083;
  double t2089;
  double t2093;
  double t2094;
  double t2132;
  double t2114;
  double t2117;
  double t2118;
  double t2110;
  double t2138;
  double t2139;
  double t2140;
  double t1810;
  double t2036;
  double t2040;
  double t2044;
  double t2046;
  double t2053;
  double t2055;
  double t2063;
  double t2434;
  double t2477;
  double t2492;
  double t2150;
  double t2151;
  double t2152;
  double t2153;
  double t2160;
  double t2169;
  double t2504;
  double t2505;
  double t2506;
  double t2500;
  double t2572;
  double t2575;
  double t2578;
  double t2503;
  double t2579;
  double t2580;
  double t2581;
  double t2539;
  double t2547;
  double t2561;
  double t2596;
  double t2597;
  double t2603;
  double t2853;
  double t2820;
  double t2587;
  double t2591;
  double t2595;
  double t2846;
  double t2824;
  double t2938;
  double t2084;
  double t2095;
  double t2097;
  double t2961;
  double t2683;
  double t2792;
  double t2793;
  double t3021;
  double t3029;
  double t3079;
  double t3152;
  t938 = Cos(var1[11]);
  t1539 = Sin(var1[11]);
  t1750 = Sin(var1[10]);
  t1755 = Cos(var1[10]);
  t1799 = Sin(var1[9]);
  t1798 = Cos(var1[9]);
  t1538 = -0.0641*t938;
  t1546 = -0.28*t1539;
  t1554 = t1538 + t1546;
  t1598 = -1.*t938;
  t1624 = 1. + t1598;
  t1625 = -0.575*t1624;
  t1626 = -0.295*t938;
  t1630 = -0.0641*t1539;
  t1632 = t1625 + t1626 + t1630;
  t1801 = 0.325*t1750;
  t1802 = t1755*t1554;
  t1803 = t1750*t1632;
  t1804 = t1801 + t1802 + t1803;
  t1786 = -1.*t938*t1750;
  t1793 = t1755*t1539;
  t1794 = t1786 + t1793;
  t1800 = 0.068*t1799;
  t1808 = t1798*t1804;
  t1809 = t1800 + t1808;
  t2025 = t1755*t938;
  t2026 = t1750*t1539;
  t2027 = t2025 + t2026;
  t1882 = -1.*t1798;
  t1937 = 1. + t1882;
  t2002 = 0.1575*t1937;
  t2003 = 0.2255*t1798;
  t2020 = -1.*t1799*t1804;
  t2022 = t2002 + t2003 + t2020;
  t1754 = t938*t1750;
  t1756 = -1.*t1755*t1539;
  t1757 = t1754 + t1756;
  t2086 = Cos(var1[5]);
  t2090 = Sin(var1[5]);
  t2085 = Cos(var1[4]);
  t2083 = Sin(var1[4]);
  t2089 = t2086*t2027;
  t2093 = t1799*t1757*t2090;
  t2094 = t2089 + t2093;
  t2132 = Cos(var1[3]);
  t2114 = -1.*t2086*t1799*t1757;
  t2117 = t2027*t2090;
  t2118 = t2114 + t2117;
  t2110 = Sin(var1[3]);
  t2138 = t1798*t2085*t1757;
  t2139 = -1.*t2083*t2094;
  t2140 = t2138 + t2139;
  t1810 = -1.*t1799*t1809;
  t2036 = -1.*t1755;
  t2040 = 1. + t2036;
  t2044 = -0.325*t2040;
  t2046 = -1.*t1750*t1554;
  t2053 = t1755*t1632;
  t2055 = t2044 + t2046 + t2053;
  t2063 = t1798*t1809*t2027;
  t2434 = t2086*t2022;
  t2477 = t2055*t2090;
  t2492 = t2434 + t2477;
  t2150 = -1.*t2086*t1799*t2027;
  t2151 = t1794*t2090;
  t2152 = t2150 + t2151;
  t2153 = t2086*t2055;
  t2160 = -1.*t2022*t2090;
  t2169 = t2153 + t2160;
  t2504 = t2086*t1794;
  t2505 = t1799*t2027*t2090;
  t2506 = t2504 + t2505;
  t2500 = -1.*t1798*t2086*t2492;
  t2572 = t1799*t2083;
  t2575 = -1.*t1798*t2085*t2090;
  t2578 = t2572 + t2575;
  t2503 = t2492*t2152;
  t2579 = t1809*t2083;
  t2580 = t2085*t2169;
  t2581 = t2579 + t2580;
  t2539 = t1798*t2027*t2083;
  t2547 = t2085*t2506;
  t2561 = t2539 + t2547;
  t2596 = t2085*t1809;
  t2597 = -1.*t2083*t2169;
  t2603 = t2596 + t2597;
  t2853 = t2055*t2027;
  t2820 = -1.*t2055*t1794;
  t2587 = t2085*t1799;
  t2591 = t1798*t2083*t2090;
  t2595 = t2587 + t2591;
  t2846 = t1798*t1809*t1757;
  t2824 = -1.*t1798*t1809*t2027;
  t2938 = t2492*t2118;
  t2084 = t1798*t1757*t2083;
  t2095 = t2085*t2094;
  t2097 = t2084 + t2095;
  t2961 = -1.*t2492*t2152;
  t2683 = t1798*t2085*t2027;
  t2792 = -1.*t2083*t2506;
  t2793 = t2683 + t2792;
  t3021 = t1799*t1809;
  t3029 = -1.*t1798*t1809*t1757;
  t3079 = t1798*t2086*t2492;
  t3152 = -1.*t2492*t2118;
  p_output1[0]=t2097*var2[0] + (t2118*t2132 - 1.*t2110*t2140)*var2[1] + (t2110*t2118 + t2132*t2140)*var2[2] + (t2561*(t2500 - 1.*t2578*t2581 - 1.*t2595*t2603) + t2578*(t2503 + t2561*t2581 + t2603*t2793))*var2[3] + (t2152*(t1810 + t1798*t2090*t2169 + t2500) + t1798*t2086*(t2063 + t2503 + t2169*t2506))*var2[4] + (t1798*(t1810 - 1.*t1798*t2022)*t2027 + t1799*(-1.*t1799*t2022*t2027 + t1794*t2055 + t2063))*var2[5] + (-0.1575*t1757 - 0.2255*t1794)*var2[9] + (-0.325*t1539 - 1.*t1539*t1632 - 1.*t1554*t938)*var2[10] - 0.0641*var2[11];
  p_output1[1]=t2578*var2[0] + (t1798*t2086*t2132 - 1.*t2110*t2595)*var2[1] + (t1798*t2086*t2110 + t2132*t2595)*var2[2] + (t2561*(t2097*t2581 + t2140*t2603 + t2938) + t2097*(-1.*t2561*t2581 - 1.*t2603*t2793 + t2961))*var2[3] + (t2152*(t2094*t2169 + t2846 + t2938) + t2118*(-1.*t2169*t2506 + t2824 + t2961))*var2[4] + (t1757*t1798*(t1799*t2022*t2027 + t2820 + t2824) + t1798*t2027*(-1.*t1757*t1799*t2022 + t2846 + t2853))*var2[5] + (t2027*(-1.*t1804*t2027 + t2820) + t1794*(t1757*t1804 + t2853))*var2[9];
  p_output1[2]=t2561*var2[0] + (t2132*t2152 - 1.*t2110*t2793)*var2[1] + (t2110*t2152 + t2132*t2793)*var2[2] + (t2097*(t2578*t2581 + t2595*t2603 + t3079) + t2578*(-1.*t2097*t2581 - 1.*t2140*t2603 + t3152))*var2[3] + (t2118*(-1.*t1798*t2090*t2169 + t3021 + t3079) + t1798*t2086*(-1.*t2094*t2169 + t3029 + t3152))*var2[4] + (t1757*t1798*(t1798*t2022 + t3021) + t1799*(t1757*t1799*t2022 - 1.*t2027*t2055 + t3029))*var2[5] + 0.068*t2027*var2[9] + (-1.*t1539*t1554 + 0.325*t938 + t1632*t938)*var2[10] - 0.28*var2[11];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RlFoot_DiagonalStance.hh"

namespace DiagonalStance
{

void dh_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
