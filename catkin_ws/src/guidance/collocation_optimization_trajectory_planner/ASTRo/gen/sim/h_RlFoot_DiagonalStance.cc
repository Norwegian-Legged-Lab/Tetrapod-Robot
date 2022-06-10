/*
 * Automatically Generated from Mathematica.
 * Fri 10 Jun 2022 23:03:39 GMT+02:00
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
  double t109;
  double t739;
  double t925;
  double t1084;
  double t1265;
  double t1322;
  double t387;
  double t1866;
  double t1512;
  double t1692;
  double t1995;
  double t2034;
  double t2040;
  double t2183;
  double t2434;
  double t2552;
  double t2618;
  double t2622;
  double t2633;
  double t2634;
  double t2651;
  double t2658;
  double t1101;
  double t1395;
  double t2877;
  double t1736;
  double t1854;
  double t2912;
  double t2895;
  double t2950;
  double t2968;
  double t3071;
  double t3225;
  double t3346;
  double t1999;
  double t2024;
  double t2493;
  double t2538;
  double t3581;
  double t3584;
  double t3590;
  double t3618;
  double t3635;
  double t3653;
  double t3673;
  double t3728;
  double t3742;
  double t3803;
  double t3804;
  double t3814;
  double t3831;
  double t3848;
  double t3851;
  double t3958;
  double t3961;
  double t3966;
  double t3986;
  double t4003;
  double t4031;
  double t4078;
  double t4081;
  double t4092;
  t109 = Cos(var1[4]);
  t739 = Cos(var1[9]);
  t925 = -1.*t739;
  t1084 = 1. + t925;
  t1265 = Sin(var1[9]);
  t1322 = 0.15121*t1265;
  t387 = Cos(var1[5]);
  t1866 = Sin(var1[5]);
  t1512 = Sin(var1[10]);
  t1692 = Sin(var1[4]);
  t1995 = Cos(var1[10]);
  t2034 = t739*t109*t387;
  t2040 = -1.*t109*t1265*t1866;
  t2183 = t2034 + t2040;
  t2434 = Cos(var1[11]);
  t2552 = t1512*t1692;
  t2618 = t1995*t2183;
  t2622 = t2552 + t2618;
  t2633 = Sin(var1[11]);
  t2634 = t1995*t1692;
  t2651 = -1.*t1512*t2183;
  t2658 = t2634 + t2651;
  t1101 = -0.15121*t1084;
  t1395 = t1101 + t1322;
  t2877 = Sin(var1[3]);
  t1736 = 0.15121*t1084;
  t1854 = t1736 + t1322;
  t2912 = Cos(var1[3]);
  t2895 = t387*t2877*t1692;
  t2950 = t2912*t1866;
  t2968 = t2895 + t2950;
  t3071 = t2912*t387;
  t3225 = -1.*t2877*t1692*t1866;
  t3346 = t3071 + t3225;
  t1999 = -1.*t1995;
  t2024 = 1. + t1999;
  t2493 = -1.*t2434;
  t2538 = 1. + t2493;
  t3581 = t739*t2968;
  t3584 = t1265*t3346;
  t3590 = t3581 + t3584;
  t3618 = -1.*t109*t1512*t2877;
  t3635 = t1995*t3590;
  t3653 = t3618 + t3635;
  t3673 = -1.*t1995*t109*t2877;
  t3728 = -1.*t1512*t3590;
  t3742 = t3673 + t3728;
  t3803 = -1.*t2912*t387*t1692;
  t3804 = t2877*t1866;
  t3814 = t3803 + t3804;
  t3831 = t387*t2877;
  t3848 = t2912*t1692*t1866;
  t3851 = t3831 + t3848;
  t3958 = t739*t3814;
  t3961 = t1265*t3851;
  t3966 = t3958 + t3961;
  t3986 = t2912*t109*t1512;
  t4003 = t1995*t3966;
  t4031 = t3986 + t4003;
  t4078 = t1995*t2912*t109;
  t4081 = -1.*t1512*t3966;
  t4092 = t4078 + t4081;
  p_output1[0]=0.28121*t1512*t1692 - 1.*t109*t1854*t1866 - 0.28121*t2024*t2183 - 0.50321*t2538*t2622 - 0.50321*t2633*t2658 - 0.19821*(t2434*t2622 - 1.*t2633*t2658) + t109*t1395*t387 + 0.15121*(-1.*t109*t1265*t387 - 1.*t109*t1866*t739) + var1[0] - 1.*var2[0];
  p_output1[1]=-0.28121*t109*t1512*t2877 + t1395*t2968 + t1854*t3346 - 0.28121*t2024*t3590 - 0.50321*t2538*t3653 - 0.50321*t2633*t3742 - 0.19821*(t2434*t3653 - 1.*t2633*t3742) + 0.15121*(-1.*t1265*t2968 + t3346*t739) + var1[1] - 1.*var2[1];
  p_output1[2]=0.28121*t109*t1512*t2912 + t1395*t3814 + t1854*t3851 - 0.28121*t2024*t3966 - 0.50321*t2538*t4031 - 0.50321*t2633*t4092 - 0.19821*(t2434*t4031 - 1.*t2633*t4092) + 0.15121*(-1.*t1265*t3814 + t3851*t739) + var1[2] - 1.*var2[2];
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

#include "h_RlFoot_DiagonalStance.hh"

namespace SymFunction
{

void h_RlFoot_DiagonalStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
