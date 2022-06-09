/*
 * Automatically Generated from Mathematica.
 * Tue 7 Jun 2022 14:11:09 GMT+02:00
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
  double t1546;
  double t1538;
  double t1554;
  double t1754;
  double t1630;
  double t1632;
  double t1755;
  double t938;
  double t1750;
  double t1756;
  double t1757;
  double t1598;
  double t1794;
  double t1798;
  double t1799;
  double t1793;
  double t2036;
  double t2044;
  double t1800;
  double t1801;
  double t1802;
  double t1810;
  double t1882;
  double t1937;
  double t2002;
  double t2003;
  double t2020;
  double t2046;
  double t2053;
  double t2055;
  double t2085;
  double t2086;
  double t2089;
  double t2093;
  double t2094;
  double t2095;
  double t2117;
  double t2118;
  double t2132;
  double t2139;
  double t2140;
  double t2150;
  double t1786;
  double t1803;
  double t1804;
  double t2587;
  double t2591;
  double t2595;
  double t2597;
  double t2603;
  double t2683;
  double t2792;
  double t2793;
  double t2820;
  double t1539;
  double t1624;
  double t1625;
  double t2581;
  double t2596;
  double t2824;
  double t2846;
  double t3021;
  double t3029;
  double t3079;
  double t3152;
  double t8787;
  double t8809;
  double t2575;
  double t2578;
  double t2579;
  double t2580;
  double t2853;
  double t2938;
  double t8825;
  double t9059;
  double t9073;
  double t9079;
  double t9088;
  double t9108;
  double t2961;
  double t8810;
  double t8819;
  double t9076;
  double t9112;
  double t9135;
  double t9154;
  double t9156;
  double t9183;
  double t1809;
  double t2022;
  double t2025;
  double t8824;
  double t9197;
  double t9254;
  double t9297;
  double t9364;
  double t9409;
  double t9696;
  double t10178;
  double t9458;
  double t9476;
  double t9597;
  double t9567;
  double t11861;
  double t11803;
  t1546 = Cos(var1[12]);
  t1538 = Sin(var1[4]);
  t1554 = Cos(var1[4]);
  t1754 = Cos(var1[13]);
  t1630 = Cos(var1[14]);
  t1632 = Sin(var1[13]);
  t1755 = Sin(var1[14]);
  t938 = Sin(var1[12]);
  t1750 = t1630*t1632;
  t1756 = -1.*t1754*t1755;
  t1757 = t1750 + t1756;
  t1598 = Sin(var1[5]);
  t1794 = t1754*t1630;
  t1798 = t1632*t1755;
  t1799 = t1794 + t1798;
  t1793 = Cos(var1[5]);
  t2036 = Cos(var1[3]);
  t2044 = Sin(var1[3]);
  t1800 = t1793*t1799;
  t1801 = t938*t1757*t1598;
  t1802 = t1800 + t1801;
  t1810 = -1.*t1630*t1632;
  t1882 = t1754*t1755;
  t1937 = t1810 + t1882;
  t2002 = t1793*t1937;
  t2003 = t938*t1799*t1598;
  t2020 = t2002 + t2003;
  t2046 = t1554*t938;
  t2053 = t1546*t1538*t1598;
  t2055 = t2046 + t2053;
  t2085 = -1.*t1793*t938*t1757;
  t2086 = t1799*t1598;
  t2089 = t2085 + t2086;
  t2093 = t1546*t1554*t1757;
  t2094 = -1.*t1538*t1802;
  t2095 = t2093 + t2094;
  t2117 = -1.*t1793*t938*t1799;
  t2118 = t1937*t1598;
  t2132 = t2117 + t2118;
  t2139 = t1546*t1554*t1799;
  t2140 = -1.*t1538*t2020;
  t2150 = t2139 + t2140;
  t1786 = t1546*t1757*t1538;
  t1803 = t1554*t1802;
  t1804 = t1786 + t1803;
  t2587 = -0.0641*t1630;
  t2591 = -0.28*t1755;
  t2595 = t2587 + t2591;
  t2597 = -1.*t1630;
  t2603 = 1. + t2597;
  t2683 = 0.075*t2603;
  t2792 = 0.355*t1630;
  t2793 = -0.0641*t1755;
  t2820 = t2683 + t2792 + t2793;
  t1539 = t938*t1538;
  t1624 = -1.*t1546*t1554*t1598;
  t1625 = t1539 + t1624;
  t2581 = -0.325*t1632;
  t2596 = t1754*t2595;
  t2824 = t1632*t2820;
  t2846 = t2581 + t2596 + t2824;
  t3021 = -1.*t1754;
  t3029 = 1. + t3021;
  t3079 = 0.325*t3029;
  t3152 = -1.*t1632*t2595;
  t8787 = t1754*t2820;
  t8809 = t3079 + t3152 + t8787;
  t2575 = -1.*t1546;
  t2578 = 1. + t2575;
  t2579 = -0.1575*t2578;
  t2580 = -0.2255*t1546;
  t2853 = -1.*t938*t2846;
  t2938 = t2579 + t2580 + t2853;
  t8825 = -0.068*t938;
  t9059 = t1546*t2846;
  t9073 = t8825 + t9059;
  t9079 = t1793*t8809;
  t9088 = -1.*t2938*t1598;
  t9108 = t9079 + t9088;
  t2961 = t1793*t2938;
  t8810 = t8809*t1598;
  t8819 = t2961 + t8810;
  t9076 = t9073*t1538;
  t9112 = t1554*t9108;
  t9135 = t9076 + t9112;
  t9154 = t1554*t9073;
  t9156 = -1.*t1538*t9108;
  t9183 = t9154 + t9156;
  t1809 = t1546*t1799*t1538;
  t2022 = t1554*t2020;
  t2025 = t1809 + t2022;
  t8824 = t1546*t1793*t8819;
  t9197 = -1.*t8819*t2089;
  t9254 = t8819*t2089;
  t9297 = -1.*t8819*t2132;
  t9364 = -1.*t1546*t1793*t8819;
  t9409 = t8819*t2132;
  t9696 = -1.*t938*t9073;
  t10178 = t1546*t9073*t1799;
  t9458 = t938*t9073;
  t9476 = -1.*t1546*t9073*t1757;
  t9597 = -1.*t1546*t9073*t1799;
  t9567 = t1546*t9073*t1757;
  t11861 = t8809*t1799;
  t11803 = -1.*t8809*t1937;
  p_output1[0]=t1804*var2[0] + t1625*var2[1] + t2025*var2[2];
  p_output1[1]=(t2036*t2089 - 1.*t2044*t2095)*var2[0] + (t1546*t1793*t2036 - 1.*t2044*t2055)*var2[1] + (t2036*t2132 - 1.*t2044*t2150)*var2[2];
  p_output1[2]=(t2044*t2089 + t2036*t2095)*var2[0] + (t1546*t1793*t2044 + t2036*t2055)*var2[1] + (t2044*t2132 + t2036*t2150)*var2[2];
  p_output1[3]=(t2025*(-1.*t1625*t9135 - 1.*t2055*t9183 + t9364) + t1625*(t2025*t9135 + t2150*t9183 + t9409))*var2[0] + (t2025*(t1804*t9135 + t2095*t9183 + t9254) + t1804*(-1.*t2025*t9135 - 1.*t2150*t9183 + t9297))*var2[1] + (t1804*(t8824 + t1625*t9135 + t2055*t9183) + t1625*(-1.*t1804*t9135 - 1.*t2095*t9183 + t9197))*var2[2];
  p_output1[4]=(t1546*t1793*(t10178 + t2020*t9108 + t9409) + t2132*(t1546*t1598*t9108 + t9364 + t9696))*var2[0] + (t2132*(t1802*t9108 + t9254 + t9567) + t2089*(-1.*t2020*t9108 + t9297 + t9597))*var2[1] + (t2089*(t8824 - 1.*t1546*t1598*t9108 + t9458) + t1546*t1793*(-1.*t1802*t9108 + t9197 + t9476))*var2[2];
  p_output1[5]=(t938*(t10178 + t1937*t8809 - 1.*t1799*t2938*t938) + t1546*t1799*(-1.*t1546*t2938 + t9696))*var2[0] + (t1546*t1799*(t11861 - 1.*t1757*t2938*t938 + t9567) + t1546*t1757*(t11803 + t1799*t2938*t938 + t9597))*var2[1] + (t1546*t1757*(t1546*t2938 + t9458) + t938*(-1.*t1799*t8809 + t1757*t2938*t938 + t9476))*var2[2];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=(0.1575*t1757 + 0.2255*t1937)*var2[0] + (t1937*(t11861 + t1757*t2846) + t1799*(t11803 - 1.*t1799*t2846))*var2[1] - 0.068*t1799*var2[2];
  p_output1[13]=(0.325*t1755 - 1.*t1630*t2595 - 1.*t1755*t2820)*var2[0] + (-0.325*t1630 - 1.*t1755*t2595 + t1630*t2820)*var2[2];
  p_output1[14]=-0.0641*var2[0] - 0.28*var2[2];
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

#include "fFrFoot_vec_ParallelStance.hh"

namespace SymFunction
{

void fFrFoot_vec_ParallelStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
