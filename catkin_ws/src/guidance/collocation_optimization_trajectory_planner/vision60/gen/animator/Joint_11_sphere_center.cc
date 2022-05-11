/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:16 GMT+02:00
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
  double t92;
  double t151;
  double t152;
  double t220;
  double t237;
  double t138;
  double t263;
  double t225;
  double t229;
  double t280;
  double t295;
  double t616;
  double t2556;
  double t3270;
  double t3334;
  double t3337;
  t92 = Cos(var1[4]);
  t151 = Sin(var1[15]);
  t152 = Sin(var1[4]);
  t220 = Cos(var1[15]);
  t237 = Sin(var1[5]);
  t138 = Cos(var1[5]);
  t263 = Sin(var1[3]);
  t225 = -1.*t220;
  t229 = 1. + t225;
  t280 = Cos(var1[3]);
  t295 = t280*t138;
  t616 = -1.*t263*t152*t237;
  t2556 = t295 + t616;
  t3270 = t138*t263;
  t3334 = t280*t152*t237;
  t3337 = t3270 + t3334;
  p_output1[0]=0.1575*t151*t152 - 0.325*t138*t92 + 0.1575*t229*t237*t92 - 0.1575*(t151*t152 - 1.*t220*t237*t92) + var1[0];
  p_output1[1]=-0.1575*t229*t2556 - 0.325*(t138*t152*t263 + t237*t280) - 0.1575*t151*t263*t92 - 0.1575*(t220*t2556 - 1.*t151*t263*t92) + var1[1];
  p_output1[2]=-0.325*(t237*t263 - 1.*t138*t152*t280) - 0.1575*t229*t3337 + 0.1575*t151*t280*t92 - 0.1575*(t220*t3337 + t151*t280*t92) + var1[2];
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

#include "Joint_11_sphere_center.hh"

namespace SymFunction
{

void Joint_11_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
