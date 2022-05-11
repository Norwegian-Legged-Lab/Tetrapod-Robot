/*
 * Automatically Generated from Mathematica.
 * Fri 4 Feb 2022 15:51:46 GMT+01:00
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
  double t122;
  double t136;
  double t139;
  double t144;
  double t146;
  double t149;
  double t134;
  double t164;
  double t154;
  double t156;
  double t207;
  double t208;
  double t200;
  double t166;
  double t169;
  double t203;
  double t211;
  double t215;
  double t219;
  double t223;
  double t224;
  double t249;
  double t251;
  double t255;
  double t259;
  double t263;
  double t264;
  t122 = Cos(var1[4]);
  t136 = Cos(var1[6]);
  t139 = -1.*t136;
  t144 = 1. + t139;
  t146 = 0.15121*t144;
  t149 = Sin(var1[6]);
  t134 = Sin(var1[5]);
  t164 = Cos(var1[5]);
  t154 = -0.15121*t149;
  t156 = t146 + t154;
  t207 = Sin(var1[3]);
  t208 = Sin(var1[4]);
  t200 = Cos(var1[3]);
  t166 = 0.15121*t149;
  t169 = t146 + t166;
  t203 = t200*t164;
  t211 = -1.*t207*t208*t134;
  t215 = t203 + t211;
  t219 = t164*t207*t208;
  t223 = t200*t134;
  t224 = t219 + t223;
  t249 = t164*t207;
  t251 = t200*t208*t134;
  t255 = t249 + t251;
  t259 = -1.*t200*t164*t208;
  t263 = t207*t134;
  t264 = t259 + t263;
  p_output1[0]=-1.*t122*t134*t156 + 0.15121*(-1.*t122*t134*t149 + t122*t136*t164) + 0.15121*(-1.*t122*t134*t136 - 1.*t122*t149*t164) + t122*t164*t169 + var1[0];
  p_output1[1]=t156*t215 + t169*t224 + 0.15121*(t149*t215 + t136*t224) + 0.15121*(t136*t215 - 1.*t149*t224) + var1[1];
  p_output1[2]=t156*t255 + t169*t264 + 0.15121*(t149*t255 + t136*t264) + 0.15121*(t136*t255 - 1.*t149*t264) + var1[2];
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

#include "Joint_fl_hip_yaw_sphere_center.hh"

namespace SymFunction
{

void Joint_fl_hip_yaw_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
