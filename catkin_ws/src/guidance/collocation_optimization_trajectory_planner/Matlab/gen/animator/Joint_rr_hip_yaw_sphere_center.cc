/*
 * Automatically Generated from Mathematica.
 * Sat 13 Nov 2021 18:01:40 GMT+01:00
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
  double t47;
  double t55;
  double t99;
  double t253;
  double t448;
  double t458;
  double t54;
  double t579;
  double t459;
  double t507;
  double t525;
  double t577;
  double t1680;
  double t1438;
  double t1546;
  double t1626;
  double t1743;
  double t1771;
  double t1830;
  double t1833;
  double t1878;
  double t2064;
  double t2106;
  double t2190;
  double t2281;
  double t2314;
  double t2343;
  t47 = Cos(var1[4]);
  t55 = Cos(var1[15]);
  t99 = -1.*t55;
  t253 = 1. + t99;
  t448 = -0.15121*t253;
  t458 = Sin(var1[15]);
  t54 = Cos(var1[5]);
  t579 = Sin(var1[5]);
  t459 = -0.15121*t458;
  t507 = t448 + t459;
  t525 = 0.15121*t458;
  t577 = t448 + t525;
  t1680 = Cos(var1[3]);
  t1438 = Sin(var1[3]);
  t1546 = Sin(var1[4]);
  t1626 = t54*t1438*t1546;
  t1743 = t1680*t579;
  t1771 = t1626 + t1743;
  t1830 = t1680*t54;
  t1833 = -1.*t1438*t1546*t579;
  t1878 = t1830 + t1833;
  t2064 = -1.*t1680*t54*t1546;
  t2106 = t1438*t579;
  t2190 = t2064 + t2106;
  t2281 = t54*t1438;
  t2314 = t1680*t1546*t579;
  t2343 = t2281 + t2314;
  p_output1[0]=t47*t507*t54 - 1.*t47*t577*t579 - 0.15121*(t47*t54*t55 - 1.*t458*t47*t579) - 0.15121*(-1.*t458*t47*t54 - 1.*t47*t55*t579) + var1[0];
  p_output1[1]=t1771*t507 - 0.15121*(t1878*t458 + t1771*t55) - 0.15121*(-1.*t1771*t458 + t1878*t55) + t1878*t577 + var1[1];
  p_output1[2]=t2190*t507 - 0.15121*(t2343*t458 + t2190*t55) - 0.15121*(-1.*t2190*t458 + t2343*t55) + t2343*t577 + var1[2];
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

#include "Joint_rr_hip_yaw_sphere_center.hh"

namespace SymFunction
{

void Joint_rr_hip_yaw_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
