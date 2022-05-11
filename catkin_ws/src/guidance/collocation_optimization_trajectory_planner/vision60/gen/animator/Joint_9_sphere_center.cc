/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:03 GMT+02:00
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
  double t2902;
  double t3497;
  double t3631;
  double t4091;
  double t4423;
  double t2932;
  double t5217;
  double t4158;
  double t4323;
  double t5231;
  double t8226;
  double t8256;
  double t8619;
  double t9234;
  double t9235;
  double t9270;
  t2902 = Cos(var1[4]);
  t3497 = Sin(var1[9]);
  t3631 = Sin(var1[4]);
  t4091 = Cos(var1[9]);
  t4423 = Sin(var1[5]);
  t2932 = Cos(var1[5]);
  t5217 = Sin(var1[3]);
  t4158 = -1.*t4091;
  t4323 = 1. + t4158;
  t5231 = Cos(var1[3]);
  t8226 = t5231*t2932;
  t8256 = -1.*t5217*t3631*t4423;
  t8619 = t8226 + t8256;
  t9234 = t2932*t5217;
  t9235 = t5231*t3631*t4423;
  t9270 = t9234 + t9235;
  p_output1[0]=-0.325*t2902*t2932 - 0.1575*t3497*t3631 - 0.1575*t2902*t4323*t4423 + 0.1575*(t3497*t3631 - 1.*t2902*t4091*t4423) + var1[0];
  p_output1[1]=0.1575*t2902*t3497*t5217 - 0.325*(t2932*t3631*t5217 + t4423*t5231) + 0.1575*t4323*t8619 + 0.1575*(-1.*t2902*t3497*t5217 + t4091*t8619) + var1[1];
  p_output1[2]=-0.1575*t2902*t3497*t5231 - 0.325*(t4423*t5217 - 1.*t2932*t3631*t5231) + 0.1575*t4323*t9270 + 0.1575*(t2902*t3497*t5231 + t4091*t9270) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Joint_9_sphere_center.hh"

namespace SymFunction
{

void Joint_9_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
