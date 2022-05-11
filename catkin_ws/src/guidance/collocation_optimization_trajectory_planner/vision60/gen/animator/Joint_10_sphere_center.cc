/*
 * Automatically Generated from Mathematica.
 * Sun 3 Apr 2022 21:11:10 GMT+02:00
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
  double t3099;
  double t3335;
  double t3434;
  double t3441;
  double t3686;
  double t3121;
  double t4544;
  double t3448;
  double t3641;
  double t4761;
  double t5172;
  double t7942;
  double t8058;
  double t12596;
  double t12828;
  double t12838;
  t3099 = Cos(var1[4]);
  t3335 = Sin(var1[12]);
  t3434 = Sin(var1[4]);
  t3441 = Cos(var1[12]);
  t3686 = Sin(var1[5]);
  t3121 = Cos(var1[5]);
  t4544 = Sin(var1[3]);
  t3448 = -1.*t3441;
  t3641 = 1. + t3448;
  t4761 = Cos(var1[3]);
  t5172 = t4761*t3121;
  t7942 = -1.*t4544*t3434*t3686;
  t8058 = t5172 + t7942;
  t12596 = t3121*t4544;
  t12828 = t4761*t3434*t3686;
  t12838 = t12596 + t12828;
  p_output1[0]=0.325*t3099*t3121 + 0.1575*t3335*t3434 + 0.1575*t3099*t3641*t3686 - 0.1575*(t3335*t3434 - 1.*t3099*t3441*t3686) + var1[0];
  p_output1[1]=-0.1575*t3099*t3335*t4544 + 0.325*(t3121*t3434*t4544 + t3686*t4761) - 0.1575*t3641*t8058 - 0.1575*(-1.*t3099*t3335*t4544 + t3441*t8058) + var1[1];
  p_output1[2]=-0.1575*t12838*t3641 + 0.1575*t3099*t3335*t4761 - 0.1575*(t12838*t3441 + t3099*t3335*t4761) + 0.325*(t3686*t4544 - 1.*t3121*t3434*t4761) + var1[2];
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

#include "Joint_10_sphere_center.hh"

namespace SymFunction
{

void Joint_10_sphere_center_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
