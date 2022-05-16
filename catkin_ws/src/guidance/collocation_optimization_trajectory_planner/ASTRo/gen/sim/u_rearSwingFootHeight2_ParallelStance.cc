/*
 * Automatically Generated from Mathematica.
 * Sat 14 May 2022 16:40:43 GMT+02:00
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
  double t2472;
  double t2694;
  double t2784;
  double t2810;
  double t2874;
  double t2940;
  double t3030;
  double t3251;
  double t3093;
  double t3253;
  double t3233;
  double t3401;
  double t3487;
  double t3551;
  double t3567;
  double t3594;
  double t2534;
  double t2547;
  double t3742;
  double t3819;
  double t3836;
  double t3856;
  double t3877;
  double t3915;
  double t3964;
  double t3970;
  double t4002;
  double t4005;
  double t4018;
  double t4020;
  t2472 = Cos(var1[3]);
  t2694 = Cos(var1[9]);
  t2784 = -1.*t2694;
  t2810 = 1. + t2784;
  t2874 = Sin(var1[9]);
  t2940 = 0.15121*t2874;
  t3030 = Cos(var1[5]);
  t3251 = Sin(var1[3]);
  t3093 = Sin(var1[4]);
  t3253 = Sin(var1[5]);
  t3233 = -1.*t2472*t3030*t3093;
  t3401 = t3251*t3253;
  t3487 = t3233 + t3401;
  t3551 = t3030*t3251;
  t3567 = t2472*t3093*t3253;
  t3594 = t3551 + t3567;
  t2534 = Cos(var1[4]);
  t2547 = Sin(var1[10]);
  t3742 = Cos(var1[10]);
  t3819 = t2694*t3487;
  t3836 = t2874*t3594;
  t3856 = t3819 + t3836;
  t3877 = Cos(var1[11]);
  t3915 = t2472*t2534*t2547;
  t3964 = t3742*t3856;
  t3970 = t3915 + t3964;
  t4002 = Sin(var1[11]);
  t4005 = t3742*t2472*t2534;
  t4018 = -1.*t2547*t3856;
  t4020 = t4005 + t4018;
  p_output1[0]=0.28121*t2472*t2534*t2547 + (-0.15121*t2810 + t2940)*t3487 + (0.15121*t2810 + t2940)*t3594 + 0.15121*(-1.*t2874*t3487 + t2694*t3594) - 0.28121*(1. - 1.*t3742)*t3856 - 0.50321*(1. - 1.*t3877)*t3970 - 0.50321*t4002*t4020 - 0.23321*(t3877*t3970 - 1.*t4002*t4020) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "u_rearSwingFootHeight2_ParallelStance.hh"

namespace SymFunction
{

void u_rearSwingFootHeight2_ParallelStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
