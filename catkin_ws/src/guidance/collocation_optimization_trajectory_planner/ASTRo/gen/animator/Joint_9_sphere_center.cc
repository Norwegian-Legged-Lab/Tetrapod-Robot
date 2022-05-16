/*
 * Automatically Generated from Mathematica.
 * Fri 13 May 2022 14:43:03 GMT+02:00
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
  double t36;
  double t76;
  double t110;
  double t116;
  double t122;
  double t123;
  double t43;
  double t171;
  double t118;
  double t143;
  double t148;
  double t161;
  double t1704;
  double t1234;
  double t1429;
  double t1664;
  double t2057;
  double t2184;
  double t2276;
  double t2326;
  double t2384;
  double t2629;
  double t2658;
  double t2796;
  double t2862;
  double t2881;
  double t2941;
  t36 = Cos(var1[4]);
  t76 = Cos(var1[9]);
  t110 = -1.*t76;
  t116 = 1. + t110;
  t122 = Sin(var1[9]);
  t123 = 0.15121*t122;
  t43 = Cos(var1[5]);
  t171 = Sin(var1[5]);
  t118 = -0.15121*t116;
  t143 = t118 + t123;
  t148 = 0.15121*t116;
  t161 = t148 + t123;
  t1704 = Cos(var1[3]);
  t1234 = Sin(var1[3]);
  t1429 = Sin(var1[4]);
  t1664 = t43*t1234*t1429;
  t2057 = t1704*t171;
  t2184 = t1664 + t2057;
  t2276 = t1704*t43;
  t2326 = -1.*t1234*t1429*t171;
  t2384 = t2276 + t2326;
  t2629 = -1.*t1704*t43*t1429;
  t2658 = t1234*t171;
  t2796 = t2629 + t2658;
  t2862 = t43*t1234;
  t2881 = t1704*t1429*t171;
  t2941 = t2862 + t2881;
  p_output1[0]=-1.*t161*t171*t36 + t143*t36*t43 + 0.15121*(-1.*t122*t36*t43 - 1.*t171*t36*t76) - 0.15121*(-1.*t122*t171*t36 + t36*t43*t76) + var1[0];
  p_output1[1]=t143*t2184 + t161*t2384 - 0.15121*(t122*t2384 + t2184*t76) + 0.15121*(-1.*t122*t2184 + t2384*t76) + var1[1];
  p_output1[2]=t143*t2796 + t161*t2941 - 0.15121*(t122*t2941 + t2796*t76) + 0.15121*(-1.*t122*t2796 + t2941*t76) + var1[2];
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
